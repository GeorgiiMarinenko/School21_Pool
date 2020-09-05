/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 22:09:53 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/15 22:11:12 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	unsigned int	flag;

	flag = 0;
	if (str[0] == '\0')
	{
		flag = 1;
	}
	while (*str != '\0')
	{
		if ((*str >= 'a') && (*str <= 'z'))
			flag = 1;
		else
			return (0);
		++str;
	}
	return (flag);
}
