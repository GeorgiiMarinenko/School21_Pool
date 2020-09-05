/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 16:22:09 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/20 19:37:03 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		i;
	int		left_border;
	int		*str;

	left_border = min;
	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	str = (int *)malloc(sizeof(*str) * size);
	if (str == NULL)
		return (-1);
	while (left_border < max)
	{
		str[i] = left_border;
		left_border++;
		i++;
	}
	*range = str;
	return (i);
}
