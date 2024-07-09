NAME = libftprintf.a

HEADER = ft_printf.h

SRCS = ft_printf.c		\
	ft_putnbr.c		\
	ft_putstr.c		\
	ft_puthexnbr.c		\
	ft_putchar.c		\
	ft_putptr.c			\
	ft_putunsignednbr.c		\

CC=clang

CCFLAGS=-Wall -Werror -Wextra

RM=rm -rf

OBJS=${SRCS:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar -rc $(NAME) ${OBJS}

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@ -I.

clean:
	@${RM} ${OBJS} ${BONUSOBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY:
	clean all fclean re bonus title
