NAME = rush-02

SRCS = ft_dict_call.c ft_symbol.c ft_numeric.c ft_atoi_rush.c main_rush.c ft_thousand.c ft_hundred.c ft_itoa_rush.c

CFLAGS = -Wall -Werror -Wextra

HEADER = ft_rush02.h

OBJS = $(SRCS:.c=.o)

CC = gcc

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) -I $(HEADER)

all: $(NAME)
	$(NAME) $(SRCS)

clean:
	rm  -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	clear
re: fclean all

.PHONY: all clean fclean
.SILENT: all $(NAME) $(OBJS)
