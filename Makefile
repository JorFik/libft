LIB = ar rcs
RM = rm -f
CC = cc
CFLAGS = -Wall -Wextra -Werror -I./h_files
ADD = -fsanitize=address
NAME = libft.a
OBJ+ = $(ft_so_far:.c=.o)

ft_so_far = ft_bzero.c ft_strlen.c ft_memset.c ft_memmove.c \
ft_memcpy.c ft_isprint.c ft_isdigit.c ft_isascii.c ft_isalpha.c\
ft_isalnum.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c\
ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c ft_printf.c get_next_line_bonus.c get_next_line_utils_bonus.c\
ft_cases.c ft_hex_cases.c ft_cases_bonus.c ft_lstnew.c\
ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

.PHONY: clean fclean re all

all: $(NAME) clean

$(NAME) : $(OBJ+)
	@$(LIB) $(NAME) $(OBJ+)
	@mv $(NAME) ../

%.o : %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJ) $(OBJ+)

fclean: clean
	@$(RM) ../$(NAME)

re: fclean all

