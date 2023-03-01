# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 12:05:02 by ktunchar          #+#    #+#              #
#    Updated: 2023/03/01 15:41:38 by ktunchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra -g

LIBS_FLAG = -LLibs -lft -lftprintf 

SRCS = push_swap.c ps_stack.c ps_intruction.c

OBJS = $(SRCS:.c=.o)

ARG = 5 1 3 2 6 

all: $(NAME) run

%.o:%.c
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(LIBS_FLAG) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run:
	./push_swap $(ARG)

.PHONY: clean fclean all re
