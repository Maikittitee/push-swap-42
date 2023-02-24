# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 12:05:02 by ktunchar          #+#    #+#              #
#    Updated: 2023/02/24 19:54:40 by ktunchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
SRC = push_swap.c stack_utils.c
LIB_FLAG = -Llibs -lft -lftprintf

INT_STACK = 2 1 4 3

all : compile execute

test: nfcompile execute

compile:
	gcc -Wall -Werror -Wextra -g $(SRC) -o push_swap $(LIB_FLAG)

execute:
	./push_swap $(INT_STACK)

stack:
	echo $(INT_STACK)

nfcompile :
	gcc -g $(SRC) -o push_swap $(LIB_FLAG)

fclean :
	rm -rf $(NAME)

re : fclean compile
