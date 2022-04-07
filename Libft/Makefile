# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gateixei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 20:02:58 by gateixei          #+#    #+#              #
#    Updated: 2022/03/14 15:24:12 by gateixei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
SRC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_atoi.c \
		ft_isprint.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c \
		ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_bzero.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c \
		ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c


BN = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ = ${SRC:.c=.o}

BNOBJ = $(BN: .c=.o)

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

bonus: $(NAME) $(BNOBJ)
	$(CC) $(CFLAGS) -I$(HEADER) -c $(BN)
	ar rcs $(NAME) $(BNOBJ)

re: fclean all

.PHONY: all clean fclean re bonus
