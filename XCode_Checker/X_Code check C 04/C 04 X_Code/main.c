//
//  main.c
//  Check_proj
//
//  Created by Aragog Arlena on 8/16/20.
//  Copyright © 2020 Aragog Arlena. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>


void ft_putchar(char c);

int	ft_strlen(char *str);
void	ft_putstr(char *str); //печать строки
void	ft_putnbr(int nb);
int	ft_atoi(char *str);
int	check_nonprintable(char str);

int	main(void)
{
	printf("Ex 00:\n");
	printf("Size = %d", ft_strlen("12345"));
	printf("\nSize = %lu\n", strlen("12345"));
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

int ft_strlen(char *str)
{
	int	size;

	size = 0;
	while(*str != '\0')
	{
		str++;
		size++;
	}
	return (size);
}

//**************************
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	str--;
}
//****************************

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if ((nb < 0) && (nb != -2147483648))
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}
int check_nonprintable(char str)
{
	char nonprintable[6];
	int	i;
	int	j;
	
	nonprintable[0] = ' ';
	nonprintable[1] = '\t';
	nonprintable[2] = '\n';
	nonprintable[3] = '\v';
	nonprintable[4] = '\r';
	nonprintable[5] = '\f';
	i = 0;
	j = 0;
	
	while (i < 6)
	{
		if(str == nonprintable[i])
			return (1);
		i++;
		j++;
	}
	return (0);
}
int     ft_atoi(char *str)
{
	int nbr;
	int sign;
	int i;

	nbr = 0;
	sign = 1;
	i = 0;
	while (check_nonprintable(str[i]))
		i++;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
