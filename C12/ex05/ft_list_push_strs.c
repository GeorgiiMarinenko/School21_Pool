/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 18:31:38 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/26 18:31:40 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*arr[size];
	int		size_copy;
	int		i;

	if (size <= 0)
		return (0);
	size_copy = size;
	i = 0;
	while ((size_copy - i) > 0)
	{
		arr[i] = ft_create_elem(strs[size_copy - 1 - i]);
		i++;
	}
	i = 0;
	while (size - 1 - i > 0)
	{
		arr[i]->next = arr[i + 1];
		i++;
	}
	return (arr[0]);
}
