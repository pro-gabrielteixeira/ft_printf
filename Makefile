NAME = libftprintf.a
HEADER = ./libft.h ft_printf.h
SRC =  ft_printf.c ft_printf_c.c ft_printf_i.c ft_printf_s.c ft_printf_p.c ft_printf_d.c ft_printf_u.c ft_printf_x.c ft_printf_X.c

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -I$(HEADER) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus