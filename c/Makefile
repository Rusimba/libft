SRC =   ft_atoi.c \
        ft_bzero.c \
        ft_calloc.c \
        ft_isalnum.c \
        ft_isalpha.c \
        ft_isascii.c \
        ft_isdigit.c \
        ft_isprint.c \
        ft_memccpy.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_memcpy.c \
        ft_memmove.c \
        ft_memset.c \
        ft_strchr.c \
        ft_strlcat.c \
        ft_strlcpy.c \
        ft_strlen.c \
        ft_strncmp.c \
        ft_strnstr.c \
        ft_strchr.c \
        ft_tolower.c \
        ft_toupper.c \
        ft_strdup.c \

obj = $(SRC:.c=.o)

comp = gcc -c

rm = rm -f

name = libtf.a

ar = ar rc $(name)
arso = ar rc libft.so
ran = ranlib $(name)
all: $(name)

$(name):
	@$(comp) $(SRC)
	@$(ar)
	@$(ran)
clean:
	@$(rm) $(obj)
	@$(rm) libft.so
fclean: clean
	@$(rm) $(name)
re: fclean all

so:
	@$(comp) $(SRC)
	@$(arso)
	@ranlib libft.so
.PHONY: all clean fclean re