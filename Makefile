# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/10 11:06:41 by nahmed-m          #+#    #+#              #
#    Updated: 2017/05/10 16:04:50 by nahmed-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAME = helloword.s

OBJ_NAME = $(SRC_NAME:.s=.o)

NAME = libfts.a

NAME2 = main

all : $(NAME)

$(NAME) :
	nasm -f macho $(SRC_NAME)
	ar rc $(NAME) $(OBJ_NAME)
	ranlib $(NAME)
#	gcc -o $(NAME2) main.c -L. libfts.a

clean :
	rm -rf $(OBJ_NAME)

fclean : clean
	rm -rf $(NAME)
	rm -rf $(NAME2)

re : fclean all

.PHONY : all re clean fclean
