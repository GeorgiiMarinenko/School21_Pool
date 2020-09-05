gcc -Wall -Werror -Wextra -c *.c
ar rc libft.a *.o
rm -f *.o
ranlib libft.a
