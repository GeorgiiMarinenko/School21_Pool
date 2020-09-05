/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:32:19 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/27 10:32:24 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *temp;

	while (begin_list->next)
	{
		free_fct(begin_list->data);
		temp = begin_list->next;
		begin_list->next = 0;
		begin_list = 0;
		begin_list = temp;
	}
	free(temp);
	free_fct(begin_list->data);
	begin_list = 0;
}
