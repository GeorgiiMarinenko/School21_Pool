NAME = do-op

SRCS = main.c ft_atoi.c ft_put.c ft_conditions.c action_ft.c ft_chek_znak.c

CFLAGS = -Wall -Werror -Wextra

HEADER = do_op.h

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
