/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 17:06:23 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/21 19:30:54 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		strs_counter(char *strs)
{
	int	i;

	i = 0;
	while (strs[i] != '\0')
		i++;
	return (i);
}

char	*set_string(int size, char **strs, char sep)
{
	char	*str;
	int		str_len;
	int		i;

	str_len = 0;
	i = 0;
	while (i < size)
	{
		str_len += strs_counter(strs[i]);
		i++;
	}
	str_len += strs_counter(&sep) * (size - 1);
	str = (char *)malloc(sizeof(char) * str_len);
	if (str == NULL)
		return (0);
	if (size == 0)
		str_len = 1;
	if (!(str = (char *)malloc(sizeof(char) * str_len)))
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		str_cnt;
	char	*str;

	i = 0;
	str_cnt = 0;
	str = set_string(size, strs, *sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[str_cnt++] = strs[i][j++];
		j = 0;
		while ((sep[j] != '\0') && (i != size - 1))
			str[str_cnt++] = sep[j++];
		i++;
	}
	str[str_cnt] = '\0';
	return (str);
}
