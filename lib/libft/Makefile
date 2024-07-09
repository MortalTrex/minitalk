SRC +=	ft_isalpha.c
SRC +=	ft_isdigit.c
SRC +=	ft_isalnum.c
SRC +=	ft_isascii.c
SRC +=	ft_isprint.c
SRC +=	ft_strlen.c
SRC +=	ft_memset.c
SRC +=	ft_bzero.c
SRC +=	ft_memcpy.c
SRC +=	ft_memmove.c
SRC +=	ft_strlcpy.c
SRC +=	ft_strlcat.c
SRC +=	ft_toupper.c
SRC +=	ft_tolower.c
SRC +=	ft_strchr.c
SRC +=	ft_strrchr.c
SRC +=	ft_strncmp.c
SRC +=	ft_memchr.c
SRC +=	ft_memcmp.c
SRC +=	ft_strnstr.c
SRC +=	ft_atoi.c
SRC +=	ft_calloc.c
SRC +=	ft_strdup.c

SRC +=	ft_substr.c
SRC +=	ft_strjoin.c
SRC +=	ft_strtrim.c
SRC +=	ft_split.c
SRC +=	ft_itoa.c
SRC +=	ft_strmapi.c
SRC +=	ft_striteri.c
SRC +=	ft_putchar_fd.c
SRC +=	ft_putstr_fd.c
SRC +=	ft_putendl_fd.c
SRC +=	ft_putnbr_fd.c

SRC_BONUS +=	ft_lstnew.c
SRC_BONUS +=	ft_lstadd_front.c
SRC_BONUS +=	ft_lstsize.c
SRC_BONUS +=	ft_lstlast.c
SRC_BONUS +=	ft_lstadd_back.c
SRC_BONUS +=	ft_lstdelone.c
SRC_BONUS +=	ft_lstclear.c
SRC_BONUS +=	ft_lstiter.c
SRC_BONUS +=	ft_lstmap.c

CC	=	clang
CFLAGS = -Wall -Wextra -Werror -I.

OBJ =	$(SRC:.c=.o)
OBJ_BONUS =	$(SRC_BONUS:.c=.o)

NAME = libft.a

$(NAME) : $(OBJ)
		ar rcv $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

bonus : $(NAME) $(OBJ_BONUS)
		ar rsv $(NAME) $(OBJ_BONUS)

clean :
	rm -rf $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re