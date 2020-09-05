/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush12.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2121/18/15 13:56:56 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/15 15:05:21 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		c_x;
	int		c_y;

	c_x = 1;
	c_y = 1;
	while (c_y <= y)
	{
		while (c_x <= x)
		{
			if (((c_x == 1) && (c_y == 1)) || ((c_x == x) && (c_y == 1)))
				ft_putchar('A');
			else if (((c_x == 1) && (c_y == y)) || ((c_x == x) && (c_y == y)))
				ft_putchar('C');
			else if (((c_x != 1) && (c_y != 1)) && ((c_x != x) && (c_y != y)))
				ft_putchar(' ');
			else
				ft_putchar('B');
			c_x++;
		}
		ft_putchar('\n');
		c_x = 1;
		c_y++;
	}
}
