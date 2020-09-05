/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_symbol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 13:46:04 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/29 13:46:05 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_rush02.h"

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = *(str + i);
		write(1, &c, 1);
		i++;
	}
}

char	*ft_str_copy(char *str, int lenght)
{
	int i = 0;
	char *str_copy;

	str_copy = (char *)malloc(sizeof(char) * (lenght + 1));
	while (i < lenght + 1)
	{
		str_copy[i] = str[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}

int		is_printable(char buf)
{
	if ((buf >= '!') && (buf <= '~'))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}