/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:30:43 by aarlena           #+#    #+#             */
/*   Updated: 2020/09/01 18:26:55 by melaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <stdlib.h>
# include <stdio.h>

typedef struct	s_square
{
	int		x;
	int		y;
	int		side;
}				t_square;

typedef struct	s_inf
{
	char	empty;
	char	full;
	char	obst;
}				t_inf;

int				numb_string();
int				string_len();
int				first_string(char *filename);
int				get_size(char *filename);

int				check_valid_map(char *buf, char *filename);
int				set_errors(int f_str, int n_str, int str_len, char *buf);
int				chek_same_symb(char *buf, int f_str);
int				fstr_all_numb(char *buf, int f_str, int n_str)
int				check_nonprintable(char str); // ???
int				check_nonprintable(char str);
int				ft_atoi(char *str);
char			*set_buf(char *filename, int numb_str, int str_len);
char			**set_map(char *filename, int f_str, int n_str, int str_len);
void			print_map(char **map, char *filename);

void			ft_putstr(char *str);
void			ft_putchar(char c);

char			**ft_generic(char **av);
t_inf			*create_inf(char empty, char full, char obst);
t_inf			*get_info(char *filename, t_inf *map_info);
t_square		*create_square(int x, int y, int side);
t_square		*set_params(t_square *dest, t_square *src);
t_square		*ft_find_square(char **strs, int width, int height, t_inf *map_inf);
char			**ft_translate_square(t_square *bsquare, char **strs);
#endif
