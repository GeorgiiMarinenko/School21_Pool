
#include <stdio.h>
#include "ft_iterative_factorial.c"
#include "ft_recursive_factorial.c"
#include "ft_iterative_power.c"
#include "ft_recursive_power.c"
#include "ft_fibonacci.c"
#include "ft_sqrt.c"
#include "ft_is_prime.c"
#include "ft_find_next_prime.c"

//int ft_iterative_factorial(int nb);
//int ft_recursive_factorial(int nb);
//int ft_iterative_power(int nb, int power);
//int ft_recursive_power(int nb, int power);
//int ft_fibonacci(int index);
//int ft_sqrt(int nb);
//int ft_is_prime(int nb);
//int ft_find_next_prime(int nb);

int main()
{
	printf("ft_iterative_factorial rez = %d", ft_iterative_factorial(10));
	printf("\nft_recursive_factorial rez = %d", ft_recursive_factorial(10));
	printf("\nft_iterative_power rez = %d", ft_iterative_power(2, 10));
	printf("\nft_recursive_power rez = %d", ft_recursive_power(2, 3));
	printf("\nft_fibonacci rez (input index -> number) = %d", ft_fibonacci(21));
	printf("\nft_sqrt rez = %d", ft_sqrt(81));
	printf("\nft_is_prime rez = %d", ft_is_prime(121));
	printf("\nft_find_next_prime rez = %d", ft_find_next_prime(13));
	
	return (0);
}

//int ft_iterative_factorial(int nb)
//{
//	int	itteration;
//	int rez;
//
//	rez = 1;
//	itteration = 1;
//	if (nb < 0)
//		return (0);
//	while (itteration <= nb)
//	{
//		rez *= itteration;
//		itteration++;
//	}
//	return (rez);
//}
//
//int ft_recursive_factorial(int nb)
//{
//	if (nb < 0)
//		return (0);
//	if((nb == 0) || (nb == 1))
//		return (1);
//	return nb * ft_recursive_factorial(nb - 1);
//}
//
//int ft_iterative_power(int nb, int power)
//{
//	int itteration;
//	int rez;
//
//	itteration = 0;
//	rez = 1;
//	if ((nb == 0) && (power == 0))
//		return (1);
//	while (itteration < power)
//	{
//		rez *= nb;
//		itteration++;
//	}
//	return (rez);
//}
//
//int ft_recursive_power(int nb, int power)
//{
//	int	rez;
//
//	rez = 1;
//	if (power < 0)
//		return (0);
//	else if (power == 0)
//		return (1);
//	else
//		return (nb * ft_recursive_power(nb, power - 1));
//}
//
//int ft_fibonacci(int index)
//{
//	if (index < 0)
//		return (-1);
//	else if (index <= 1)
//		return (index);
//	else
//		return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
//}
//
//int ft_sqrt(int nb)
//{
//	int	counter;
//	int rez;
//	int nb_cpy;
//
//	counter = 1;
//	rez = 0;
//	nb_cpy = nb;
//	if (nb < 0)
//		return (0);
//	while (nb > 0)
//	{
//		nb -= counter;
//		counter += 2;
//		rez++;
//	}
//	counter += 2;
//	if (rez * rez != nb_cpy)
//		return (0);
//	else
//		return (rez);
//}
//
//int ft_is_prime(int nb)
//{
//	int	i;
//
//	i = 2;
//	if (nb <= 1)
//		return (0);
//	while (i < nb)
//	{
//		if (nb % i == 0)
//			return (0);
//		i++;
//	}
//	return (1);
//}

//int ft_find_next_prime(int nb)
//{
//	int	i;
//	
//	i = 1;
//	if (ft_is_prime(nb) == 1)
//		return (nb);
//	else
//		while(ft_is_prime(nb + i) == 0)
//			i++;
//	return (nb + i);
//}
