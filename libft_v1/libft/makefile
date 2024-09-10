# Sources
SRC = ./ft_strlen.c \
    ./ft_strcat.c \
    ./ft_strcpy.c \
    ./ft_strncpy.c \
    ./ft_strdup.c \
    ./ft_tolower.c \
    ./ft_toupper.c \
    ./ft_isprint.c \
    ./ft_isalpha.c \
    ./ft_isdigit.c \
    ./ft_isalnum.c \
    ./ft_isascii.c \
    ./ft_strchr.c \
    ./ft_strrchr.c \
    ./ft_strstr.c \
    ./ft_putchar.c \
    ./ft_putchar_fd.c \
    ./ft_putstr.c \
    ./ft_putstr_fd.c \
    ./ft_putendl_fd.c \
    ./ft_strjoin.c \
    ./ft_putnbr.c \
    ./ft_strcmp.c \
    ./ft_strncmp.c \
    ./ft_atoi.c \
    ./ft_bzero.c \
    ./ft_putnbr_fd.c \
    ./ft_putendl.c \
    ./ft_memalloc.c \
    ./ft_memdel.c \
    ./ft_memset.c \
    ./ft_strnew.c \
    ./ft_strdel.c \
    ./ft_strclr.c \
    ./ft_strtrim.c \
    ./ft_strncat.c \
    ./ft_strlcat.c \
    ./ft_strnstr.c \
    ./ft_strsplit.c \
    ./ft_memcpy.c \
    ./ft_memccpy.c \
    ./ft_memcmp.c \
    ./ft_memchr.c \
    ./ft_memmove.c \
    ./ft_striter.c \
    ./ft_striteri.c \
    ./ft_strmap.c \
    ./ft_strmapi.c \
    ./ft_strequ.c \
    ./ft_strnequ.c \
    ./ft_strsub.c \
    ./ft_itoa.c \
    ./ft_size_int.c \
    ./ft_strrev.c \
    ./ft_isnegatif.c \
    ./ft_count_word.c \
    ./ft_safe_alloc.c \
	./main.c

# Objets
OBJ = $(SRC:.c=.o)

# Flags de compilation
CFLAGS += -Werror -Wextra -Wall -I./include

# Nom de la bibliothèque
NAME = libft.a

# Nom de la bibliothèque
NAME2 = binary_name

# Compilation de la bibliothèque
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
# Nom de la bibliothèque

$(NAME2): $(OBJ)
	cc $(CFLAGS) -o ./$(NAME2) $(OBJ)

# Règle all (compilation par défaut)
all: $(NAME)

# Règle all (compilation par défaut)
a: $(NAME2)

# Règle clean (nettoyage des objets)
clean:
	rm -f $(OBJ)

# Règle fclean (nettoyage complet)
fclean: clean
	rm -f $(NAME)

# Règle re (recompilation complète)
re: fclean all

.PHONY: all clean fclean re
