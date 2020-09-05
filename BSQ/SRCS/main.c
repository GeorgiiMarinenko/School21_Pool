/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 22:34:29 by melaena           #+#    #+#             */
/*   Updated: 2020/09/01 19:26:28 by melaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_bsq.h"
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int		console_input(void)
{
	char	buf[1000];
	int		ret;

	while (1)
	{
		ret = read(0, buf, 1000);
		ft_putstr(buf);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char		**strs;
	int			count;
	t_square 	*bsquare;
	t_inf		*map_info;
	
	map_info = create_inf('1', '1', '1');
	count = 0;
	if (argc == 1)
	{
		console_input();
		return (0);
	}
	while (++count < argc)	
	{
		map_info = get_info(argv[count], map_info);
		strs = set_map(argv[count], first_string(argv[count]), numb_string(argv[count]), string_len(argv[count]));
		if (strs == NULL)
			continue;
		bsquare = ft_find_square(strs, string_len(argv[count]), numb_string(argv[count]), map_info);
		strs = ft_translate_square(bsquare, strs);
		print_map(strs, argv[count]);
		if (count != argc - 1)
			ft_putstr("\n");
	}
}
