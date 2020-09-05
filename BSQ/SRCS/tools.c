/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 20:40:25 by melaena           #+#    #+#             */
/*   Updated: 2020/09/01 18:42:33 by melaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include "fcntl.h"

t_inf			*create_inf(char empty, char full, char obst)
{
	t_inf	*info;

	info = malloc(sizeof(t_inf));
	if (info)
	{
		info->empty = empty;
		info->full = full;
		info->obst = obst;
	}
	return (info);
}

t_square		*create_square(int x, int y, int side)
{
	t_square *square;

	square = malloc(sizeof(square));
	if (square)
	{
		square->x = x;
		square->y = y;
		square->side = side;
	}
	return (square);
}

t_square		*set_params(t_square *dest, t_square *src)
{
	if (dest->side < src->side)
	{
		dest->x = src->x;
		dest->y = src->y;
		dest->side = src->side;
	}
	return (dest);
}

t_inf			*get_info(char *filename, t_inf *map_info)
{
	int		fd;
	int		ret;
	int		buf[1];
	char	string[4];
	int		count;

	count = 0;
	string[3] = '\0';
	fd = open(filename, O_RDWR);
	if (!fd)
		return (0);
	while ((ret = read(fd, buf, 1)))
	{
		if (*buf == '\n')
			break ;
		if (!(*buf <= '9' && *buf >= '0'))
			string[count++] = *buf;
		if (count == 3)
			break ;
	}
	map_info->empty = string[0];
	map_info->obst = string[1];
	map_info->full = string[2];
	close(fd);
	return (map_info);
}
