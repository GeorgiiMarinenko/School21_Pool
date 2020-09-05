/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 11:41:18 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/24 15:21:13 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	char	buf[65535];
	int		handle;
	ssize_t	n;

	if (argc <= 1)
	{
		write(1, "File name missing\n", 19);
		return (-1);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments\n", 20);
		return (-1);
	}
	handle = open(argv[1], O_RDONLY);
	while ((n = read(handle, buf, 2048)) && n != -1)
		write(1, buf, n);
	if (n == -1)
	{
		write(1, "Cannot read file\n", 18);
		close(handle);
		return (-1);
	}
	close(handle);
	return (0);
}
