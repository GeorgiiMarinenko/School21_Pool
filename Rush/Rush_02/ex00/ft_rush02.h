/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush02.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 13:10:01 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/29 21:36:04 by kszeski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH02_H
# define FT_RUSH02_H
# include <unistd.h>

typedef struct	s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}				t_dict;

char	*set_buf(char *dd);
int		is_numb(char buf);
int		is_printable(char buf);
char	*ft_str_copy(char *str, int lenght);
void	ft_putstr(char *str);
int		ft_str_is_numeric(char *str);
char	*ft_dict_call(char *key, t_dict *dictnum);
t_dict	*set_struct(char *buf, int k, int v);
int		is_numb(char buf);
int		is_letter(char buf);
int		ft_atoi_rush(char *str);
int		ft_str_is_numeric(char *str);
int		ft_strlen(char *str);
int		ft_strpower(int n, int ch);
int		ft_strcmp(char *s1, char *s2);
void	ft_thousand(char *str, int ch, int kol, t_dict *dictnum);
char	*arrfull(char *arr, int a, int i, int kol, char *str);
void	ft_hundred(int x, t_dict *dictnum);
char	*ft_itoa_rush(int n);
char	ft_reverse(char s[]);
void	ft_ch(int ch, t_dict *dictnum);
int		ft_putnbr(int nb);
void filling(char *numdict, char *h);

#endif
