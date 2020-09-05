NAME = BSQ

SRCS = SRCS/ft_atoi.c SRCS/ft_character_proc.c SRCS/ft_set_map.c\
	   SRCS/ft_find_square.c SRCS/ft_numb_proc.c SRCS/main.c\
	   SRCS/set_errors.c SRCS/tools.c

CFLAGS = -Wall -Werror -Wextra

HEADER = INCLUDES

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

.PHONY: all clean fclean
.SILENT: all $(NAME) $(OBJS)
