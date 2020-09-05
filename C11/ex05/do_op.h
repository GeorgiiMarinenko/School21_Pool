/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 16:02:02 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/25 16:02:04 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H
# include <unistd.h>

int		ft_sum(int value1, char operateur, int value2);
int		ft_subtraction(int value1, char operateur, int value2);
int		ft_devision(int value1, char operateur, int value2);
int		ft_multiplication(int value1, char operateur, int value2);
int		ft_remainder(int value1, char operateur, int value2);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		check_nonprintable(char str);
int		ft_atoi(char *str);
void	ft_rezult(char **argv);
void	ft_putnbr(int nb);
int		ft_conditions(char **argv);
int		ft_check_znak(char *znak);

#endif
