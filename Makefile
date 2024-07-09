NAME_C = client
NAME_S = server

SRC_C = src/client.c
	  
SRC_S = src/server.c

GNL_FILES = get_next_line.c\
		get_next_line_utils.c

GNLS = $(addprefix lib/gnl/,${GNL_FILES})

FLAGS = -Wall -Werror -Wextra -I includes/ -g

LIB = libft/libft.a ft_printf/libftprintf.a

DEPS = $(addprefix lib/,${LIB:%.c=%.o})

all: ${NAME_C} ${NAME_S}

${NAME_C} : ${SRC_C}
	make -C lib/libft
	make -C lib/ft_printf
	cc ${FLAGS} ${SRC_C} -L -l -I -lm -lz -o ${NAME_C} ${DEPS} ${GNLS} 
	echo "Client compiled"
	

${NAME_S} : ${SRC_S}
	cc ${FLAGS} ${SRC_S} -L -l -I -lm -lz -o ${NAME_S} ${DEPS} ${GNLS}
	echo "Server compiled"

clean:
	make -C lib/libft clean
	make -C lib/ft_printf clean

fclean: clean
	rm -rf ${NAME_C}
	rm -rf ${NAME_S}

re:    fclean all

.PHONY: all clean fclean re
