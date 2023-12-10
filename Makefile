CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

main:
	gcc main.c libft.a -o app

clean:
	rm -rf ${OBJ}

fclean:
	rm -rf ${NAME} ${OBJ}

re: fclean all