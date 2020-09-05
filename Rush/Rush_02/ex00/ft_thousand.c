/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thousand.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvictor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 15:45:01 by nvictor           #+#    #+#             */
/*   Updated: 2020/08/29 15:46:52 by nvictor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <stdio.h>
		//arrfull(arr,      3,   kol,      kol,     str)
char *arrfull(char *arr, int a, int i, int kol, char *str)
{
	int j;

	j = 0;
	while (i - a < kol)
	{
		arr[j] = str[i-a];
		//printf("\narr[%d] %c", j, arr[j]);
		//printf("str[%d] %c\n", i, str[i-a]);
		i++;
		j++;
	}
	arr[j] = '\0';
	return (arr);
}

void	ft_thousand(char *str, int ch, int kol, t_dict *dictnum)
{
	char arr[4];
	//char power[ft_strpower(3, ch) + 2];
	int j;
	//i = 0;
	j = 1;
	if (kol - 3 <= 0)
		{
			//printf("111\n");
			ft_hundred(ft_atoi_rush(arrfull(arr, 0, 0, kol, str)), dictnum);
			//printf("111   %d\n", ch);
			if (ch)
				{
					ft_ch(ch, dictnum);
					ft_putstr(" ");
				}

		}
	else
	{
		//printf("call if kol - 3 != 0\n");
		ch++;
		ft_thousand(str, ch, kol - 3, dictnum);
		ch--;
		/*i = kol;
		while (i - 3 < kol)
		{
			arr[i] = str[i];
			i++;
		}
		arr[i] = '\0';
		ft_hundred(ft_atoi_rush(arr), ch);*/

		//printf("%s",arrfull(arr, 3, kol, kol, str));
		//printf("kol %d\n", kol);
		//ft_hundred(ft_atoi_rush(arrfull(arr, 3, kol, kol, str)), dictnum);
		//printf("222   %d\n", ch);
		ft_hundred(ft_atoi_rush(arrfull(arr, 3, kol, kol, str)), dictnum);
		if (ch)
			ft_ch(ch, dictnum);
		/*power[0] = '1';
		while (j <= ft_strpower(3, ch))
		{
			power[j] = '0';
			j++;
		}
		power[j] = '\0';
		if (ft_dict_call(power, dictnum))
			ft_putstr(ft_dict_call(power, dictnum));*/
		/*else
		{
			//обозначить ошибку и завершить программу!!!
		}*/
		
		//ft_hundred((x % 1000 ** ch) % 100, ch); // возведение в степень реализовать
	}	
}

