/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_errors.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 21:38:30 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/31 22:49:03 by melaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../INCLUDES/ft_bsq.h"

int	fstr_all_numb(char *buf, int f_str, int n_str)
{
	int		numb_len;
	int		i;
	char	numb;
	int		number;

	numb_len = f_str - 4;
	i = 0;
	while (buf[i] < numb_len)
		i++;
	numb = malloc(sizeof(int) * i);
	i = 0;
	number = ft_atoi(numb);
	if (number == n_str)
		return (0);
	else
		return (-1);
}

int	chek_same_symb(char *buf, int f_str)
{
	int	i;
	int	j;
	int	len;

	i = f_str - 4;
	j = 0;
	while (buf[i] != '\n')
		checker[j++] = buf[i++];
	len = string_len(checker);
	i = 0;
	while (i < len)
	{
		j = i + 1;
		if (checker[i] == checker[j])
			return (-1);
	}
	return (0);
}

int	valid_symb(char *buf, int f_str)
{
	int		i;
	int		j;
	char	checker[5];
	int		is_here;

	i = f_str - 4;
	j = 0;
	while (buf[i] != '\n')
		checker[j++] = buf[i++];
	checker[j] = '\n';
	checker[j + 1] = '\0';
	i = f_str;
	j = -1;
	is_here = 0;
	while (buf[++i] != '\0')
	{
		while (checker[++j] != '\0')
			if (checker[j] == buf[i])
				is_here = 1;
		if (!is_here)
			return (-1);
		j = -1;
		is_here = 0;
	}
	return (0);
}

int	set_errors(int f_str, int n_str, int str_len, char *buf)
{
	(void)str_len;
	if (f_str < 5)
		return (-1);
	if (n_str < 2)
		return (-1);
	if (ft_atoi(buf) == 0)
		return (-1);
	if (ft_atoi(buf) != (n_str - 1))
		return (-1);
	if (buf[0] == '0')
		return (-1);
	if (valid_symb(buf, f_str) == -1)
		return (-1);
	if (chek_same_symb(buf, f_str) == -1)
		return (-1);
	if (fstr_all_numb(buf, f_str, n_str) == -1)
		return (-1);
	return (0);
}
