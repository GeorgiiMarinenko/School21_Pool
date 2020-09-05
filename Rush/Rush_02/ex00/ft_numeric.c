/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numeric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 13:46:04 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/29 13:46:05 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_rush02.h"



int	ft_str_is_numeric(char *str)
{
	int ch;
	int i;

	ch = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ('0' > str[i] || str[i] > '9')
			return (0);
		i++;
	}
	return (ch);
}

int	ft_strpower(int n, int ch)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (i < ch)
	{
		res = res + n;
		i++;
	}
	return (res);
}

int		is_numb(char buf)
{
	if ((buf >= '0') && (buf <= '9'))
		return (1);
	else
		return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s2 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}