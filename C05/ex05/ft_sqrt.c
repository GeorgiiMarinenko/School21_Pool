/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 18:08:21 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/18 18:09:10 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;
	int	rez;
	int	nb_cpy;

	counter = 1;
	rez = 0;
	nb_cpy = nb;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		nb -= counter;
		counter += 2;
		rez++;
	}
	counter += 2;
	if (rez * rez != nb_cpy)
		return (0);
	else
		return (rez);
}
