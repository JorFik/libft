LIB = ar rcs
RM = rm -f
CC = cc
CCFLAGS = -Wall -Wextra -Werror 
# -c -fsanitize=address
NAME = libft.a
OBJ = $(ft_so_far:.c=.o)

ft_so_far = ft_bzero.c ft_strlen.c ft_memset.c ft_memmove.c \
ft_memcpy.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c\
ft_isalnum.c ft_strlcpy.c ft_strlcat.c ft_toupper.c
h_file = libft.h

.PHONY: clean fclean re all

all: $(NAME)
$(NAME) : $(OBJ) $(h_file)
	@$(LIB) $(NAME) $(OBJ)

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
