/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_call.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 13:05:12 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/29 13:05:24 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "ft_rush02.h"
#include <stdlib.h>
#include <stdio.h>
#define STRCOPY ft_str_copy(key, k), ft_str_copy(value, v)

char		*set_buf(char *dd)
{
	int		handle;
	int		bytes;
	char	*buf;
	char	*filename;

	filename = (char *)malloc(13);
	filename = dd;
	buf = (char *)malloc(sizeof(char) * 2048);
	if ((handle = open(filename, O_RDWR)) && (handle == -1))
	{
		ft_putstr("Dict Error1\n");
		*buf = 0;
		return (buf);
	}
	bytes = read(handle, buf, 2048);
	if (bytes == -1)
	{
		ft_putstr("Dict Error2\n");
		*buf = 0;
		return (buf);
	}
	return (buf);
}

t_dict		*ft_create_elem(void *key, void *value)
{
	t_dict	*list;

	list = malloc(sizeof(t_dict));
	if (list != 0)
	{
		list->key = key;
		list->value = value;
		list->next = 0;
	}
	return (list);
}

void		ft_list_push_back(t_dict **begin_list, void *key, void *value)
{
	t_dict	*elem;
	t_dict	*list;

	elem = ft_create_elem(key, value);
	if (!*begin_list)
	{
		*begin_list = elem;
		return ;
	}
	list = *begin_list;
	while (list->next)
		list = list->next;
	list->next = elem;
	elem->next = 0;
}

t_dict		*set_struct(char *buf, int k, int v)
{
	int		i;
	t_dict	*arr_struct;
	int		flag;
	char	*key;
	char	*value;
	int		flag2;

	i = 0;
	arr_struct = 0;
	flag = 0;
	flag2 = 0;
	while (buf[i] != '\0')
	{
		key = malloc(sizeof(char) * 50);
		value = malloc(sizeof(char) * 50);
		while (buf[i] != '\n')
		{
			if ((is_numb(buf[i]) == 1) && (flag == 0))
				key[k++] = buf[i];
			else if (buf[i] == ':')
				flag = 1;
			else if (is_printable(buf[i]))
			{
				value[v++] = buf[i];
				flag2 = 1;
			}
			else if (buf[i] == ' ' && flag2 == 1)
			{
				value[v++] = buf[i];
				flag2 = 0;
			}
			i++;
		}
		key[k] = '\0';
		if (value[v - 1] == ' ')
			value[v - 1] = '\0';
		else
			value[v] = '\0';
		ft_list_push_back(&arr_struct, STRCOPY);
		free(key);
		free(value);
		i++;
		flag = 0;
		k = 0;
		v = 0;
	}
	return (arr_struct);
}

char		*ft_dict_call(char *key, t_dict *dictnum)
{
	while (dictnum)
	{
		if (ft_strcmp(dictnum->key, key) == 0)
			return (dictnum->value);
		dictnum = dictnum->next;
	}
	return (NULL);
}
