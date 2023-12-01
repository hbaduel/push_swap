NAME = push_swap

SRC = src/main.c src/push.c src/sort.c src/check.c src/sortlow.c src/rotate.c src/swap.c src/utils/ft_atoi.c src/utils/ft_isdigit.c src/utils/ft_putchar_fd.c src/utils/ft_putstr_fd.c src/utils/ft_strcmp.c src/utils/ft_split.c

OBJS = ${SRC:%.c=%.o}

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.phony: all clean fclean re
