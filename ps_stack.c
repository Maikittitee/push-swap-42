/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:55:02 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/17 13:30:21 by ktunchar         ###   ########.fr       */
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
	int prev;

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

int		peek(t_stack *stack)
{
	if (!stack)
		return (0);
	return ((stack)->value);	
}

t_stack	*new_stack_node(int value)
{
	// it's work don't touch it.
	t_stack *buffer;

	buffer = malloc(sizeof(t_stack));
	buffer->value = value;
	buffer->lower = NULL;

	return (buffer);
}

void		stack_add(t_stack **head_stack, t_stack *new_node)
{
	// Now it's work, Don't touch
	if (!*head_stack)
		*head_stack = new_node;
	else
	{
		new_node->lower = *head_stack;
		*head_stack = new_node;	
// 		head_stack = &new_node; 
//		how the fuck is last 2 line are different bruh
	}	
}

t_stack		*stack_pop(t_stack **head_stack)
{
	t_stack *temp;

	temp = *head_stack;
	*head_stack = (*head_stack)->lower;
	temp->lower = NULL;

	return (temp);
}

void    init_stack(t_stack **stack, char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		stack_add(stack, new_stack_node(ft_atoi(av[i])));
		i++;
	}
}

int		display_stack(t_stack *stack)
{
	int	i;

	i = 0;
	if (!stack)
	{
		ft_printf("Stack is empty\n");
		return (0);
	}
	while (stack->lower != NULL)
	{
		ft_printf("Index: %d | Value: %d\n",stack->index, stack->value);
		stack = stack->lower ;
		i++;
	}
	ft_printf("Index: %d | Value: %d\n",stack->index, stack->value);
	return (i);
}