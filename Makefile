# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srafe <srafe@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/20 17:47:07 by srafe             #+#    #+#              #
#    Updated: 2018/11/26 15:11:04 by srafe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -c -Wall -Wextra -Werror
SRCS = srcs/*.c
INCLD = includes
NAME = libft.a


all: compile clean

compile: clean
		gcc -I $(INCLD) $(CFLAGS) $(SRCS) 
		ar rc $(NAME) *.o
		ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
