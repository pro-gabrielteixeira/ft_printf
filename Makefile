NAME = libftprintf.a
HEADER = -L./libft.h ft_printf.h
SRC =  libft/*.c *.c

OBJ = *.o

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
