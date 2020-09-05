/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 15:42:13 by melaena           #+#    #+#             */
/*   Updated: 2020/09/01 18:19:48 by melaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INCLUDES/ft_bsq.h"
#include <stdio.h>
#include <stdlib.h>

t_inf			*g_info;

int				square_check(t_square *sq, char **strs, int width, int height)
{
	int x;
	int y;
	int xgr;
	int ygr;
	int size;

	size = sq->side + 1;
	x = sq->x - 1;
	y = sq->y;
	xgr = sq->x + size;
	ygr = sq->y + size;
	if (xgr > height)
		return (0);
	if (ygr > width)
		return (0);
	while (++x < xgr)
	{
		y = sq->y;
		while (y < ygr)
		{
			if (strs[x][y++] == g_info->obst)
				return (0);
		}
	}
	return (1);
}

t_square		*cell_bsquare(t_square *bsquare, t_square *curr_sq,
				char **strs, t_square *params)
{
	int width;
	int height;

	width = params->x;
	height = params->y;
	while (1)
	{
		if (square_check(curr_sq, strs, width, height))
			curr_sq->side = curr_sq->side + 1;
		else
		{
			bsquare = set_params(bsquare, curr_sq);
			break ;
		}
	}
	return (bsquare);
}

t_square		*ft_find_square(char **strs, int width, int height, t_inf *map_inf)
{
	t_square	*bsquare;
	t_square	*curr_sq;
	int			x;
	int			y;
	t_square	*params;
	
	g_info = map_inf;
	params = create_square(width, height, -1);
	bsquare = create_square(0, 0, 0);
	curr_sq = create_square(0, 0, 1);
	x = -1;
	while (++x < height)
	{
		y = -1;
		while (++y < width)
		{
			curr_sq->x = x;
			curr_sq->y = y;
			curr_sq->side = bsquare->side;
			if (strs[curr_sq->x][curr_sq->y] == g_info->obst)
				continue ;
			bsquare = cell_bsquare(bsquare, curr_sq, strs, params);
		}
	}
	return (bsquare);
}

char			**ft_translate_square(t_square *bsquare, char **strs)
{
	int x;
	int y;
	int	count;

	count = 0;
	x = bsquare->x;
	y = bsquare->y;
	while (x < bsquare->x + bsquare->side)
	{
		y = bsquare->y;
		while (y < bsquare->y + bsquare->side)
		{
			strs[x][y] = g_info->full;
			y++;
		}
		x++;
	}
	return (strs);
}
