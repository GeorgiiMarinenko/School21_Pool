/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 19:48:44 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/28 19:48:46 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = (t_btree*)malloc(sizeof(t_btree));
	node->item = item;
	node->left = 0;
	node->right = 0;
	return (node);
}

void	btree_insert_data(t_btree **root, void *item,
int (*cmpf)(void *, void *))
{
	if (!root)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf(root, (*root)->item) < 0)
	{
		if (!((*root)->left))
		{
			(*root)->left = btree_create_node(item);
			return ;
		}
		btree_insert_data(&(*root)->left, item, cmpf);
	}
	else
	{
		if (!((*root)->right))
		{
			(*root)->right = btree_create_node(item);
			return ;
		}
		btree_insert_data(&(*root)->right, item, cmpf);
	}
}
