/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:34:22 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/31 22:57:11 by melaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../INCLUDES/ft_bsq.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
	int		n_str;
	int		str_len;
	int		f_str;
	f_str = first_string(argv[1]);
	n_str = numb_string(argv[1]);
	str_len = string_len(argv[1]);
	printf("\n\nfirst len = %d\n", first_string(argv[1]));
	printf("number of string -  %d\n", numb_string(argv[1]));
	printf("string len - %d\n\n", string_len(argv[1]));
	char *buf;
	char **map;
	//buf = set_buf(argv[1], numb_str, str_len);
	//ft_putstr(buf);
	map = set_map(argv[1], f_str, n_str, str_len);
	//ft_putstr(map);
	//printf("strings are equal? - %d", check_valid_map(buf, argv[1]));
	//
	//print_map(map, argv[1]);
	return (0);
}
