NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c  ft_isprint.c ft_strlen.c ft_memset.c
OBJS = $(SRCS.c=.o)

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)