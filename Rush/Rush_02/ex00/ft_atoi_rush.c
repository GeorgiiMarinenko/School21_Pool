/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 15:48:35 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/29 15:48:39 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"

int		ft_atoi_rush(char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i])
	{
		num = (str[i] - 48) + 10 * num;
		str++;
	}
	return (num);
}

