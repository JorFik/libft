NAME = libft.a
RM = rm -rf
LIB = ar rcs
CC = cc

HEADERS_DIR = includes/ includes/char includes/mem includes/str ../../includes\
	# ../../includes ../../includes/char ../../includes/mem ../../includes/str \
	# ../../../includes ../../../includes/char ../../../includes/mem \
	# ../../../includes/str
INCLUDES = $(addprefix -I , $(HEADERS_DIR))
CFLAGS = -Wall -Wextra -Werror -Wunreachable-code -c $(INCLUDES)

################################################################################
#									SORCES									   #
################################################################################

CHAR_CHECK_FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
	ft_isprint.c
CHAR_CHECK_SRC = $(addprefix char_checks/, $(CHAR_CHECK_FILES))
CHAR_OP_FILES = ft_tolower.c ft_toupper.c
CHAR_OP_SRC = $(addprefix char_operations/, $(CHAR_OP_FILES))
CHAR_SRC = $(addprefix char/, $(CHAR_OP_SRC) $(CHAR_CHECK_SRC))

FD_OP_FILES = ft_close.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	ft_putstr_fd.c
FD_OP_SRC = $(addprefix fd_operations/, $(FD_OP_FILES))

FT_PRINTF_FILES = ft_cases_bonus.c ft_cases.c ft_hex_cases.c ft_printf.c\
	ft_printf_fd.c
FT_PRINTF_SRC = $(addprefix ft_printf/, $(FT_PRINTF_FILES))

GNL_FILES = get_next_line_bonus.c get_next_line_utils_bonus.c
GNL_SRC = $(addprefix get_next_line/, $(GNL_FILES))

LST_OP_FILES = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
LST_OP_SRC = $(addprefix lst_operations/, $(LST_OP_FILES))

MEM_ALLOC_FILES = ft_calloc.c ft_free_2d_array.c ft_free_n_null.c
MEM_ALLOC_SRC = $(addprefix mem_allocation/, $(MEM_ALLOC_FILES))
MEM_CHECK_FILES = ft_memchr.c ft_memcmp.c
MEM_CHECK_SRC = $(addprefix mem_checks/, $(MEM_CHECK_FILES))
MEM_OP_FILES = ft_bzero.c ft_memcpy.c ft_memmove.c ft_memset.c
MEM_OP_SRC = $(addprefix mem_operations/, $(MEM_OP_FILES))
MEM_SRC = $(addprefix mem/, $(MEM_ALLOC_SRC) $(MEM_CHECK_SRC) $(MEM_OP_SRC))

STR_CHECK_FILES = ft_strchr.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
	ft_strrchr.c
STR_CHECK_SRC = $(addprefix str_checks/, $(STR_CHECK_FILES))
STR_OP_FILES = ft_atoi.c ft_itoa.c ft_split.c ft_strdup.c ft_striteri.c\
	ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strmapi.c ft_strtrim.c\
	ft_substr.c
STR_OP_SRC = $(addprefix str_operations/, $(STR_OP_FILES))
STR_SRC = $(addprefix str/, $(STR_CHECK_SRC) $(STR_OP_SRC))

SRC = $(addprefix src/, $(CHAR_SRC) $(FD_OP_SRC) $(FT_PRINTF_SRC) $(GNL_SRC)\
	$(LST_OP_SRC) $(MEM_SRC) $(STR_SRC))
OBJ = $(SRC:src/%.c=bin/%.o)

################################################################################
#									RULES									   #
################################################################################

.PHONY: clean fclean re all 

all: $(NAME)

$(NAME) : $(OBJ)
	@$(LIB) $(NAME) $(OBJ)

bin/%.o : src/%.c | bin
	@$(CC) $(CFLAGS) $< -o $@

bin:
	@mkdir -p bin/char/char_checks bin/char/char_operations
	@mkdir bin/fd_operations
	@mkdir bin/ft_printf
	@mkdir bin/get_next_line
	@mkdir bin/lst_operations
	@mkdir -p bin/mem/mem_allocation bin/mem/mem_checks bin/mem/mem_operations
	@mkdir -p bin/str/str_checks bin/str/str_operations

clean:
	@$(RM) bin

fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus: all
