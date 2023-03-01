/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/01 15:54:31 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	is_empty(t_stack **stack)
{
	if (!*stack)
		return (1);
	return (0);
}


int	st_min(t_stack *node)
{
	int	min;

	if (!node)
		return (0);
	min = node->value;
	while (node)
	{
		if (node->value < min)
			min = node->value;
		node = node->lower;
	}
	return (min);
}

void	inserting_sort(t_stack **a, t_stack **b)
{
	int	min;

	min = st_min(*a);
	// //min = 1;
	printf("min of a is: %d\n", min);
	while (!is_empty(a))
	{
		while (peek(*a) != min)
			ft_rotate(a);
		if (peek(*a) == min)
		{
		 	ft_push(a,b);
		 	min = st_min(*a);
		}
	}
	while (!is_empty(b))
	{
		ft_push(b,a);
	}
}

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	init_stack(&stack_a, av);
	display_stack(stack_a);
	ft_printf("peek of A is: %d\n", peek(stack_a));
	ft_printf("is stack sort? : %d\n", is_sort(stack_a));
	ft_printf("-----------------------A------------------\n");
	inserting_sort(&stack_a, &stack_b);
	display_stack(stack_a);
	ft_printf("-------------------B--------------------------\n");
	display_stack(stack_b);

    return (0);
}