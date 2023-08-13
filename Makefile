NAME = libft.a

SRCS = ft_strlen.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_isascii.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_itoa.c \
	   ft_atoi.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strdup.c \
	   ft_bzero.c \
	   ft_memccpy.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

HEADER_DIR=libft.h

CC = cc

CFLAGS=-Wall -Werror -Wextra -I $(HEADER_DIR)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
