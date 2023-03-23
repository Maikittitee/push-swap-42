# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 13:27:29 by ktunchar          #+#    #+#              #
#    Updated: 2023/03/23 22:10:06 by ktunchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra -g

LIBS_FLAG = -LLibs -lft -lftprintf 

SRCS = 0_push_swap.c 1_ps_stack.c 2_ps_intruction.c 3_ps_intruction_utils.c 4_ps_sort3.c 5_ps_sort5.c 6_argument.c 7_check_err.c 8_ft_strtol.c 9_radix_sort.c 10_index.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(LIBS_FLAG) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run:
	./push_swap $(ARG)

.PHONY: clean fclean all re
