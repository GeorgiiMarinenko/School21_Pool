/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numb_proc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:39:29 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/31 22:51:44 by melaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "../INCLUDES/ft_bsq.h"

int		numb_string(char *filename)
{
	int		f_opener;
	char	c;
	int		str_cnt;

	str_cnt = 0;
	f_opener = open(filename, O_RDWR);
	while (read(f_opener, &c, 1) == 1)
	{
		if (c == '\n')
			str_cnt++;
	}
	close(f_opener);
	return (str_cnt);
}

int		string_len(char *filename)
{
	int		f_opener;
	char	c;
	int		str_len;
	int		flag;

	str_len = 0;
	flag = 0;
	f_opener = open(filename, O_RDWR);
	while (read(f_opener, &c, 1) == 1)
	{
		if ((c == '\n') && (!flag))
			flag = 1;
		else if ((c == '\n') && (str_len > 0))
			break ;
		if (flag == 1)
			str_len++;
	}
	close(f_opener);
	return (str_len);
}

int		first_string(char *filename)
{
	int		f_opener;
	char	c;
	int		str_len;

	str_len = 0;
	f_opener = open(filename, O_RDWR);
	while (read(f_opener, &c, 1) == 1)
	{
		str_len++;
		if (c == '\n')
			break ;
	}
	close(f_opener);
	return (str_len);
}

int		get_size(char *filename)
{
	int		size;
	int		numb_str;
	int		str_len;
	int		first_str;

	first_str = first_string(filename);
	numb_str = numb_string(filename);
	str_len = string_len(filename);
	size = (numb_str * str_len) - (str_len - first_str);
	return (size);
}
