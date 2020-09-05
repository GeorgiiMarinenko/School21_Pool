/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 21:55:16 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/28 21:55:17 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
void *data_ref, int (*cmpf)(void *, void *))
{
	void *it;

	if (!root)
		return (0);
	if ((it = btree_search_item(root->left, data_ref, cmpf)))
		return (it);
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	if ((it = btree_search_item(root->right, data_ref, cmpf)))
		return (it);
	return (0);
}
