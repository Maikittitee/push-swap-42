/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/02/24 17:53:29 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_put(t_stack **src, t_stack **dst)
{
	stack_add(dst, stack_pop(src));
}

void	ft_swap(t_stack **struct)
{
	t_stack *first;
	t_stack *second;



}

void	ft_rotate(t_stack **struct)

void	ft_rev_rotate(t_stack **struct)

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	init_stack(&stack_a, av);

	display_stack(stack_a);
	ft_printf("-\n");
	display_stack(stack_b);
	ft_put(&stack_a,&stack_b);
	ft_printf("---------------------------------------------------------------------------\n");
	display_stack(stack_a);
	ft_printf("-\n");
	display_stack(stack_b);


    return (0);
}