# CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ${wildcard ft_*.c}
OBJ = ${SRC:.c=.o}
NAME = libft.a

all: ${NAME}    # all : libft.a

${NAME}: ${OBJ} # libft.a : ft_*.o
	ar rcs ${NAME} ${OBJ} 

# ar rcs $@ ${OBJ} ==> $@ is an automatic variable that contains the target name.

bonus: ${NAME}

#testing
main:
# ${CC} ${CFLAGS} main.c libft.a && ./a.out
	cc ${CFLAGS} ft_lstclear_bonus.c  ft_lstsize_bonus.c main.c
#clean object files
clean:
	rm -rf ${OBJ}

#clean object files and library file
fclean:
	rm -rf ${NAME} ${OBJ}

#clean and re-create
re: fclean all