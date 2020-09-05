/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:40:49 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/31 23:10:04 by melaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_bsq.h"

int	check_nonprintable(char str)
{
	char	nonprintable[6];
	int		i;

	nonprintable[0] = ' ';
	nonprintable[1] = '\t';
	nonprintable[2] = '\n';
	nonprintable[3] = '\v';
	nonprintable[4] = '\r';
	nonprintable[5] = '\f';
	i = 0;
	while (i < 6)
	{
		if (str == nonprintable[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;
	int	i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (check_nonprintable(str[i]))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
