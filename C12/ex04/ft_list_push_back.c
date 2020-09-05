/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 18:19:02 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/26 18:19:04 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*list;

	elem = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = elem;
		return ;
	}
	list = *begin_list;
	while (list->next)
		list = list->next;
	list->next = elem;
	elem->next = 0;
}
