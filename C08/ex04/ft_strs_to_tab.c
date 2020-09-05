/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/22 19:43:21 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/22 21:47:13 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char					*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	str = (char *)malloc(sizeof(*str) * (i + 1));
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int						ft_strlen(char *av)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (av[i] != '\0')
	{
		size++;
		i++;
	}
	return (size);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*pointer;
	int			i;

	i = 0;
	pointer = malloc(sizeof(*pointer) * (ac + 1));
	if (pointer == NULL)
		return (pointer);
	while ((i < ac) && (av[i] != '\0'))
	{
		pointer[i].size = ft_strlen(av[i]);
		pointer[i].str = av[i];
		pointer[i].copy = ft_strdup(av[i]);
		i++;
	}
	pointer[i].str = 0;
	return (pointer);
}
