CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_substr.c ft_calloc.c ft_strlcpy.c ft_strlcat.c ft_memmove.c ft_bzero.c ft_memcmp.c ft_memcpy.c ft_strnstr.c ft_split.c ft_strjoin.c ft_itoa.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
