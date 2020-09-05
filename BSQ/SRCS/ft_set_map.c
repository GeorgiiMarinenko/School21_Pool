/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:28:35 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/31 22:56:46 by melaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../INCLUDES/ft_bsq.h"
#include <stdio.h>

int		check_valid_map(char *buf, char *filename)
{
	int	str_len;
	int	str_len2;
	int	flag;
	int	i;

	i = 0;
	str_len = string_len(filename);
	str_len2 = 0;
	flag = 0;
	while (buf[i] != '\0')
	{
		if ((flag) && (buf[i] == '\n'))
		{
			if (str_len - 1 != str_len2)
				return (0);
			str_len2 = 0;
		}
		if ((buf[i] == '\n') && (!flag))
			flag = 1;
		if ((flag) && (buf[i] != '\n'))
			str_len2++;
		i++;
	}
	return (1);
}

char	*set_buf(char *filename, int numb_str, int str_len)
{
	int		f_opener;
	ssize_t	f_reader;
	char	*buf;

	buf = (char *)malloc(sizeof(char ) * get_size(filename));
	if ((f_opener = open(filename, O_RDWR)) && (f_opener == -1))
		return (NULL);
	f_reader = read(f_opener, buf, get_size(filename));
	if (f_reader == -1)
		return (NULL);
	if (check_valid_map(buf, filename) == 0)
	{
		ft_putstr("Invalid map\n");
		return (NULL);
	}
	if (set_errors(first_string(filename), numb_str, str_len, buf) == -1)
	{
		ft_putstr("Invalid map\n");
		return (NULL);
	}
	close(f_opener);
	return (buf);
}

char	**set_map(char *filename, int f_str, int n_str, int str_len)
{
	char	**map;
	char	*buf;
	int		i;
	int		j;
	int		k;

	map = malloc(sizeof(char **) * n_str - 1);
	buf = set_buf(filename, n_str, str_len);
	if (buf == NULL)
		return (0);
	i = -1;
	j = -1;
	k = 0;
	while (++i < n_str)
		map[i] = malloc(sizeof(char *) * (str_len));
	i = f_str;
	while (++j < n_str - 1)
	{
		while (k++ < str_len)
			map[j][k] = buf[i++];
		map[j][k - 1] = '\0';
		k = 0;
	}
	ft_putchar(map[0][0]);
	return (map);
}

void	print_map(char **map, char *filename)
{
	int	i;
	int	j;
	int	numb_str;
	int	str_len;

	i = 0;
	j = 0;
	numb_str = numb_string(filename);
	str_len = string_len(filename);
	while (i < numb_str - 1)
	{
		while (j < str_len)
		{
			ft_putchar(map[i][j]);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
