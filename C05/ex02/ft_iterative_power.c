/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 18:04:49 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/18 18:05:23 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	itteration;
	int	rez;

	itteration = 0;
	rez = 1;
	if ((nb == 0) && (power == 0))
		return (1);
	while (itteration < power)
	{
		rez *= nb;
		itteration++;
	}
	return (rez);
}
