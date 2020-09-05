/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 12:02:33 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/25 12:02:36 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*r;

	i = 0;
	if ((r = (int *)malloc(sizeof(r) * length)) == NULL)
		return (0);
	while (i < length)
	{
		r[i] = f(tab[i]);
		i++;
	}
	return (r);
}
