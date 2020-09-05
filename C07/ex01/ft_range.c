/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 12:04:34 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/20 19:35:24 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		i;
	int		left_border;
	int		*str;

	left_border = min;
	i = 0;
	size = max - min;
	str = (int *)malloc(sizeof(*str) * size);
	if (min >= max)
		str = NULL;
	i = 0;
	while (left_border < max)
	{
		str[i] = left_border;
		left_border++;
		i++;
	}
	return (str);
}
