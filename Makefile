c_flags = -Wall -Wextra -Werror -c
ft_so_far = ft_bzero.c, ft_strlen.c, ft_memset.c, ft_memmove.c, \
ft_memcpy.c, ft_isprint.c, ft_isdigit.c, ft_isascii.c, ft_isalpha.c, ft_isalnum.c
h_file = libft.h

.PHONY: clean, fclean, re, all
all: libft.a
libft.a :  $(h_file)
	@cc $(c_flags) *.c
	@ar -rc libft.a *.o
clean:
	@rm *.o
fclean:
	@rm *.o *.a
re: fclean all