/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:11:54 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/17 18:28:43 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int	ft_atoi(char *str);
int	check_nonprintable(char str);

int main(void)
{
	printf("Ex 00:\n");
	printf("Size = %d", ft_strlen("12345"));
	printf("\nSize = %d\n", strlen("12345"));
	printf("--------------------\n");
	ft_putstr("qwert");
	printf("\n");
	printf("--------------------\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(147483648);
	printf("\n");
	printf("--------------------\n");
	printf("rez = %d", ft_atoi("  	--+-+123ert"));
	return 0;
}
