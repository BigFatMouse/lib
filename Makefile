# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhogg <mhogg@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/07 16:06:33 by mhogg             #+#    #+#              #
#    Updated: 2020/11/22 11:23:23 by mhogg            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c  ft_strrchr.c ft_strnstr.c ft_strncmp.c \
ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c ft_strmapi.c
OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) -c $(SRC)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
