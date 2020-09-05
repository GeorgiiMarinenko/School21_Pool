/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 22:14:29 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/15 22:16:02 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	flag;

	flag = 0;
	if (str[0] == '\0')
	{
		flag = 1;
	}
	while (*str)
	{
		if ((*str >= ' ') && (*str <= '~'))
			flag = 1;
		else
			return (0);
		++str;
	}
	return (flag);
}
