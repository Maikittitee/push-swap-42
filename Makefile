# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/17 13:27:29 by ktunchar          #+#    #+#              #
#    Updated: 2023/04/12 01:52:30 by ktunchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = -Wall -Werror -Wextra -g

LIBFT_FLAG = -LLib/libft -lft
LIBFTPRINTF_FLAG = -LLib/libftprintf -lftprintf 

SRCS = 0_push_swap.c \
		1_stack.c \
		1_stack_checker.c \
		2_inst_rev_rotate.c \
		2_inst_push_rotate.c \
		2_inst_swap.c \
		3_intruction_parent.c \
		4_ps_sort3.c \
		6_argument.c \
		8_ft_strtol.c \
		9_radix_sort.c \
		10_index.c \
		5_ps_sort5.c \
		7_check_err.c \
		11_free.c \
		99_more_tool.c 

OBJS = $(SRCS:.c=.o)

all: libftprintf libft $(NAME)

libft : 
	make -C Lib/libft

libftprintf:
	make -C Lib/libftprintf

%.o:%.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(LIBFT_FLAG) $(LIBFTPRINTF_FLAG) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS) Lib/libft/*.o Lib/libftprintf/*.o

fclean: clean
	rm -rf $(NAME) Lib/libft/*.a Lib/libftprintf/*.a

re: fclean all

run:
	./push_swap $(ARG)

.PHONY: clean fclean all re
