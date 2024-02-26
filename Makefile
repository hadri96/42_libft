NAME = libft.a

SRCS = is/ft_isalpha.c \
	   is/ft_isdigit.c \
	   is/ft_isalnum.c \
	   is/ft_isprint.c \
	   is/ft_isascii.c \
	   string/ft_strlen.c \
	   string/ft_strncmp.c \
	   string/ft_toupper.c \
	   string/ft_tolower.c \
	   string/ft_strchr.c \
	   string/ft_strrchr.c \
	   string/ft_strnstr.c \
	   string/ft_itoa.c \
	   string/ft_atoi.c \
	   string/ft_strlcat.c \
	   string/ft_strlcpy.c \
	   string/ft_strdup.c \
	   string/ft_substr.c \
	   string/ft_strtrim.c \
	   string/ft_strjoin.c \
	   string/ft_split.c \
	   string/ft_strmapi.c \
	   string/ft_striteri.c \
	   string/join_strarr.c \
	   memory/ft_bzero.c \
	   memory/ft_memcpy.c \
	   memory/ft_memset.c \
	   memory/ft_memmove.c \
	   memory/ft_memchr.c \
	   memory/ft_memcmp.c \
	   memory/ft_calloc.c \
	   memory/free_strarr.c \
	   put/ft_putchar_fd.c \
	   put/ft_putstr_fd.c \
	   put/ft_putendl_fd.c \
	   put/ft_putnbr_fd.c \
	   printf/ft_printf.c \
	   printf/ft_puthex.c \
	   printf/ft_putnbr.c \
	   printf/ft_putptr.c \
	   printf/ft_putstr.c \
	   garbage/galloc.c \
	   garbage/garbage_utils.c \
	   garbage/gfree.c \
	   get_next_line/get_next_line.c \
	   get_next_line/get_next_line_utils.c \
	   arr_utils/arr_len.c \
	   arr_utils/arr_insert.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

BSRCS = linked_lists/ft_lstnew.c \
		linked_lists/ft_lstsize.c \
		linked_lists/ft_lstadd_front.c \
		linked_lists/ft_lstadd_back.c \
		linked_lists/ft_lstclear.c \
		linked_lists/ft_lstlast.c \
		linked_lists/ft_lstiter.c \
		linked_lists/ft_lstmap.c \
		linked_lists/ft_lstdelone.c

BOBJS = $(patsubst %.c,%.o,$(BSRCS))

HEADER_DIR=libft.h

CC = cc

CFLAGS=-Wall -Werror -Wextra -I $(HEADER_DIR)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

bonus: $(OBJS) $(BOBJS)
	ar -rcs $(NAME) $^

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
