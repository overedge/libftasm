# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nahmed-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/10 11:06:41 by nahmed-m          #+#    #+#              #
#*   Updated: 2017/05/11 23:45:20 by nahmed-m         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

SRC_NAME = ft_isalpha.s ft_isdigit.s ft_isalnum.s ft_isascii.s ft_isprint.s \
		   ft_isupper.s ft_islower.s ft_toupper.s ft_tolower.s ft_bzero.s ft_strlen.s ft_strcat.s ft_puts.s

OBJ_NAME = $(SRC_NAME:.s=.o)

NAME = libfts.a

NAME2 = main

all : $(NAME)

$(NAME) :
	$(foreach var,$(SRC_NAME), nasm -f macho64 $(var);)
	ar rc $(NAME) $(OBJ_NAME)
	ranlib $(NAME)
	gcc -o $(NAME2) main.c -L. libfts.a

clean :
	rm -rf $(OBJ_NAME)

fclean : clean
	rm -rf $(NAME)
	rm -rf $(NAME2)

re : fclean all

.PHONY : all re clean fclean
