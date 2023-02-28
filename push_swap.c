/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/02/28 22:11:23 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *stack_a;
    // t_stack *stack_b;

	stack_a = NULL;
	// stack_b = NULL;
	init_stack(&stack_a, av);
	display_stack(stack_a);
	printf("peek of A is: %d\n", stack_peek(&stack_a));
	// ft_rev_rotate(&stack_a);
	// ft_printf("------------------------------------------------------------\n");
	// display_stack(stack_a);

    return (0);
}