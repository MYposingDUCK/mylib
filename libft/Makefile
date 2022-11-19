NAME = libmy.a

SRC = my_atoi.c my_strlen.c my_memset.c my_bzero.c my_memcpy.c\
my_isalpha.c my_isdigit.c my_isalnum.c my_isascii.c my_isprint.c\
my_toupper.c my_tolower.c my_calloc.c my_strdup.c my_memccpy.c\
my_memmove.c my_memchr.c my_memcmp.c my_strlcpy.c my_strlcat.c\
my_strchr.c my_strrchr.c my_strncmp.c my_strnstr.c my_putchar_fd.c\
my_putstr_fd.c my_putnbr_fd.c my_substr.c my_strtrim.c my_itoa.c\
my_strjoin.c my_split.c my_strmapi.c my_putendl_fd.c

BONUS_SRC = my_lstnew.c my_lstadd_front.c
OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

FLAGS = gcc -Wall -Werror -Wextra -c

$(NAME): ${OBJ}
	$(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
bonus:
	$(FLAGS) $(BONUS_SRC)
	ar rc $(NAME) $(BONUS_OBJ)
	ranlib $(NAME)
all: $(NAME)
clean:
	rm -f $(OBJ) $(BONUS_OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all bonus clean fclean re