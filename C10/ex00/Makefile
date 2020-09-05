# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarlena <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 11:24:49 by aarlena           #+#    #+#              #
#    Updated: 2020/08/24 15:21:16 by aarlena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = main.c

CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

CC = gcc

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c = .o)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

all: $(NAME)
	$(NAME) $(SRCS)

clean:
	rm  -f $(OBJS)

fclean: clean
	rm -f $(NAME)

