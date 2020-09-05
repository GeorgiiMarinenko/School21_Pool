/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 11:38:26 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/27 11:38:27 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*temp;
	t_list	*previous;
	t_list	*current;

	previous = *begin_list;
	current = previous->next;
	previous->next = 0;
	while (current->next)
	{
		temp = current->next;
		current->next = previous;
		previous = current;
		current = temp;
	}
	current->next = previous;
	*begin_list = current;
}
