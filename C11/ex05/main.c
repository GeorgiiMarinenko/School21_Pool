/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 15:20:37 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/25 15:20:39 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!(ft_check_znak(argv[2])))
			return (0);
		ft_conditions(argv);
		write(1, "\n", 1);
	}
	else
		return (0);
	return (0);
}
