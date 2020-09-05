/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hundred.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 15:48:35 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/29 15:48:39 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <stdio.h>

void	ft_hundred(int x, t_dict *dictnum)
{
	if (x / 100 != 0)
	{
		ft_putstr(ft_dict_call(ft_itoa_rush(x / 100), dictnum));
		ft_putstr(" hundred");
	}
	if (((x % 100) / 10) > 0 && ((x % 100 % 10) > 0))
	{
		ft_putstr(ft_dict_call(ft_itoa_rush((x % 100) / 10 * 10), dictnum));
		ft_putstr("-");
		ft_putstr(ft_dict_call(ft_itoa_rush((x % 100) % 10), dictnum));
	}
	else if ((x % 100) / 10)
		ft_putstr(ft_dict_call(ft_itoa_rush((x % 100) / 10 * 10), dictnum));
	else if ((x % 100) % 10)
		ft_putstr(ft_dict_call(ft_itoa_rush((x % 100) % 10), dictnum));
	if (x % 100 != 0)
		ft_putstr(" ");
}

void	ft_ch(int ch, t_dict *dictnum)
{
	char	power[ft_strpower(3, ch) + 2];
	int		j;

	j = 1;
	power[0] = '1';
	while (j <= ft_strpower(3, ch))
	{
		power[j] = '0';
		j++;
	}
	power[j] = '\0';
	if (ft_dict_call(power, dictnum))
		ft_putstr(ft_dict_call(power, dictnum));
}
