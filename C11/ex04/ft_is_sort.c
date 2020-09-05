/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 14:42:43 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/25 14:42:46 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < (length - 1))
	{
		if (f(tab[j], tab[j + 1]) <= 0)
			j++;
		else
			j = length;
	}
	if (j == length - 1)
		return (1);
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			i++;
		else
			i = length;
	}
	if (i == length - 1)
		return (1);
	return (0);
}
