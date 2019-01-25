# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srafe <srafe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 17:47:07 by srafe             #+#    #+#              #
#    Updated: 2019/01/25 12:57:27 by srafe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I./includes -c
FILES = srcs/*.c
NAME = libft.a
OBJ	= *.o

all: $(NAME) clean

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
		gcc $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
