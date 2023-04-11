/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_ps_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:55:02 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/11 20:46:59 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack_node(int value)
{
	t_stack	*buffer;

	buffer = malloc(sizeof(t_stack));
	buffer->value = value;
	buffer->lower = NULL;

	return (buffer);
}

void	stack_add(t_stack **head_stack, t_stack *new_node)
{
	if (!*head_stack)
		*head_stack = new_node;
	else
	{
		new_node->lower = *head_stack;
		*head_stack = new_node;
	}
}

t_stack	*stack_pop(t_stack **head_stack)
{
	t_stack	*temp;

	temp = *head_stack;
	*head_stack = (*head_stack)->lower;
	temp->lower = NULL;

	return (temp);
}

void	init_stack(t_stack **stack, char **av, int ac)
{
	ac -= 2;
	while (ac >= 0)
	{
		stack_add(stack, new_stack_node(ft_atoi(av[ac])));
		ac--;
	}
}

int	stack_size(t_stack *node)
{
	int	i;

	i = 0;
	if (!node)
		return (0);
	while (node)
	{
		i++;
		node = node->lower;
	}
	return (i);
}