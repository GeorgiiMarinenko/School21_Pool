/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kszeski <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/30 16:14:12 by kszeski           #+#    #+#             */
/*   Updated: 2020/08/30 16:16:03 by kszeski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush02.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	ft_reverse(char s[])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
	return (c);
}

int	ft_putnbr(int nb)
{
	if ((nb / 10) == 0)
		return (1);
	else
		return (1 + ft_putnbr((nb / 10)));
}

char	*ft_itoa_rush(int n)
{
	int		i;
	int		j;
	char	*tab;

	tab = (char *)malloc(ft_putnbr(n) * sizeof(char));
	i = 0;
	j = 0;
	while (n)
	{
		j = n % 10;
		n = n / 10;
		tab[i] = 48 + j;
		i++;
	}
	ft_reverse(tab);
	return (tab);
}

/*int main()
{
	int a = ft_putnbr(5556);
	printf("%d", a);
	return (0);
}*/