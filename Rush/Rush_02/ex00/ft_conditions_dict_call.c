/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions_dict_call.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 13:46:04 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/29 13:46:05 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include "ft_rush02.h"

void set_zero_terminate(char *key, char *value)
{
	key = '\0';
	value = '\0';
}

void get_free(char *key, char *value)
{
	free(key);
	free(value);
}
