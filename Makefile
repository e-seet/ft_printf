# **************************************************************************** #
# Variables
# **************************************************************************** #

NAME        = libftprintf.a
CC          = gcc
CFLAGS      = -Wall -Wextra -Werror
INCLUDES    = -I . -I libft
LIBS        = -L libft -lft

# **************************************************************************** #
# Source Files
# **************************************************************************** #

SRCS        = ft_printf.c
OBJS        = $(SRCS:.c=.o)

# **************************************************************************** #
# Rules
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) -C libft clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
