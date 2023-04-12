/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_stack_checker.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:46:12 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 15:31:00 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_empty(t_stack **stack)
{
	if (!*stack)
		return (1);
	return (0);
}

int	is_sort(t_stack *stack)
{
	int	prev;

	prev = stack->value;
	stack = stack->lower;
	while (stack)
	{
		if (stack->value < prev)
			return (0);
		prev = stack->value;
		stack = stack->lower;
	}
	return (1);
}
