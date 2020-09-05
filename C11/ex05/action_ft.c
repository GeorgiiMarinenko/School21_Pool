/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_ft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 10:27:58 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/26 10:28:02 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_sum(int value1, char operateur, int value2)
{
	if (operateur == '+')
		ft_putnbr(value1 + value2);
	return (0);
}

int	ft_subtraction(int value1, char operateur, int value2)
{
	if (operateur == '-')
		ft_putnbr(value1 - value2);
	return (0);
}

int	ft_devision(int value1, char operateur, int value2)
{
	if (value2 == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	if (operateur == '/')
		ft_putnbr(value1 / value2);
	return (0);
}

int	ft_multiplication(int value1, char operateur, int value2)
{
	if (operateur == '*')
		ft_putnbr(value1 * value2);
	return (0);
}

int	ft_remainder(int value1, char operateur, int value2)
{
	if (value2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	if (operateur == '%')
		ft_putnbr(value1 % value2);
	return (0);
}
