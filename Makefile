# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 12:05:02 by ktunchar          #+#    #+#              #
#    Updated: 2023/02/24 12:38:09 by ktunchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = push_swap.c
LIB_FLAG = -Llibs -lft -lftprintf

INT_STACK = 2 3 5 1 6 8

all : compile execute

test: nfcompile execute

compile:
	gcc -Wall -Werror -Wextra -g push_swap.c -o push_swap $(LIB_FLAG)

execute:
	./push_swap $(INT_STACK)

stack:
	echo $(INT_STACK)

nfcompile :
	gcc -g push_swap.c -o push_swap $(LIB_FLAG)

fclean :
	rm -rf $(NAME)

re : fclean compile
