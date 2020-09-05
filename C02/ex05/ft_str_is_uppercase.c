/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 22:13:01 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/15 22:14:04 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	unsigned int	flag;

	flag = 0;
	if (str[0] == '\0')
	{
		flag = 1;
	}
	while (*str)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
			flag = 1;
		else
			return (0);
		++str;
	}
	return (flag);
}
