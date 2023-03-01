/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_insert_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:14:28 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/01 16:14:41 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	inserting_sort(t_stack **a, t_stack **b)
{
	int	min;
	int	count;

	count = 0;
	min = st_min(*a);
	printf("min of a is: %d\n", min);
	while (!is_empty(a))
	{
		while (peek(*a) != min)
			count += ft_rotate(a);
		if (peek(*a) == min)
		{
		 	count += ft_push(a,b);
		 	min = st_min(*a);
		}
	}
	while (!is_empty(b))
	{
		count += ft_push(b,a);
	}
	return (count);
}