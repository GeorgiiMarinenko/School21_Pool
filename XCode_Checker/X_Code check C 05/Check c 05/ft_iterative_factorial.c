/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 17:57:43 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/18 18:00:27 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	itteration;
	int	rez;

	rez = 1;
	itteration = 1;
	if (nb < 0)
		return (0);
	while (itteration <= nb)
	{
		rez *= itteration;
		itteration++;
	}
	return (rez);
}
