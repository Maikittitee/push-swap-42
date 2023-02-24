/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/02/24 16:10:11 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void		stack_pop(t_stack **stack)
{

}




// void		free_stack





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


int main(int ac, char **av)
{
    t_stack *stack_a;
	t_stack *curr;

	stack_a = NULL;

	init_stack(&stack_a, av);

	curr = stack_a;
	while (curr->lower != NULL)
	{
		ft_printf("Value of the node is %d | current address is %p | its lower node is %p\n",curr->value, curr, curr->lower);
		curr = curr->lower ;
	}
	ft_printf("Value of the node is %d | current address is %p | its lower node is %p\n",curr->value, curr, curr->lower);

    return (0);
}