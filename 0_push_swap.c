/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_push_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/24 16:20:54 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// TODO : CLEAN EVERY FILE -> 5 declear, 25 per line

void	ft_sort(t_stack **a, t_stack **b)
{
	if (stack_size(*a) == 3)
		sort_3(a, b);
	else if (stack_size(*a) == 5)
		sort_5(a, b);
	else {
		radix_sort(a, b);
	}	
}


int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
	char **argument;

	if (ac < 2)
		return (0);
	argument = ft_ultimate_split(av, ' ');
	check_err(argument);
	a = NULL;
	b = NULL;
	init_stack(&a, argument, ac);
	put_index(a);
	if (!is_sort(a))
		ft_sort(&a, &b);
	ft_double_free(argument);
	ft_freestack(&a);
    return (0);
}