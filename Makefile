LIB = ar -rcs
RM = rm -f
CC = cc
CCFLAGS = -Wall -Wextra -Werror -c -fsanitize=address
NAME = libft.a

ft_so_far = ft_bzero.c ft_strlen.c ft_memset.c ft_memmove.c \
ft_memcpy.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c\
ft_isalnum.c ft_strlcpy.c ft_strlcat.c ft_toupper.c
h_file = libft.h

.PHONY: clean fclean re all
all: $(NAME)
$(NAME) :  $(h_file) $(ft_so_far)
	@$(CC) $(CCFLAGS) $(ft_so_far)
	@$(LIB) $(NAME) *.o
clean:
	@$(RM) *.o
fclean: clean
	@$(RM) $(NAME)
re: fclean all