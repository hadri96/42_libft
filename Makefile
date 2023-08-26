NAME = libft.a

SRCS = ft_strlen.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isprint.c \
	   ft_isascii.c \
	   ft_strncmp.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strnstr.c \
	   ft_itoa.c \
	   ft_atoi.c \
	   ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strdup.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memset.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_calloc.c \
	   ft_substr.c \
	   ft_strtrim.c \
	   ft_strjoin.c \
	   ft_split.c \
	   ft_strmapi.c \
	   ft_striteri.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

BSRCS = ft_lstnew.c \
		ft_lstsize.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_lstclear.c \
		ft_lstlast.c \
		ft_lstiter.c \
		ft_lstdelone.c

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
