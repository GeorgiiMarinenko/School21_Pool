/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 17:51:45 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/25 17:51:48 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	ft_conditions(char **argv)
{
	int value1;
	int value2;
	int (*ft_arr[5])(int, char, int);

	ft_arr[0] = &ft_sum;
	ft_arr[1] = &ft_subtraction;
	ft_arr[2] = &ft_devision;
	ft_arr[3] = &ft_multiplication;
	ft_arr[4] = &ft_remainder;
	value1 = ft_atoi(argv[1]);
	value2 = ft_atoi(argv[3]);
	if (*argv[2] == '+')
		(*ft_arr[0])(value1, *argv[2], value2);
	else if (*argv[2] == '-')
		(*ft_arr[1])(value1, *argv[2], value2);
	else if (*argv[2] == '/')
		(*ft_arr[2])(value1, *argv[2], value2);
	else if (*argv[2] == '*')
		(*ft_arr[3])(value1, *argv[2], value2);
	else if (*argv[2] == '%')
		(*ft_arr[4])(value1, *argv[2], value2);
	else
		write(1, "0", 1);
	return (0);
}
