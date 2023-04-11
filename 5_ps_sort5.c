/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_ps_sort5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:01:40 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 00:26:58 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	minimum_index(t_stack *node)
{
	int	min;

	if (!node)
		return (0);
	min = node->index;
	while (node)
	{
		if (node->index < min)
			min = node->index;
		node = node->lower;
	}
	return (min);
}

int	times_to_get_min(t_stack *s)
{
	int	index;
	int	min;

	min  = minimum_index(s);
	index = 0;
	while (s)
	{
		if (s->index == min)
		{
			return (index);
		}
		index++;
		s = s->lower;
	}
	return (0);
}

int	choose_method(t_stack **a, int (**method)(t_stack **))
{
	int	times;
	int	min_a_index;
	int	size_a;

	min_a_index = times_to_get_min(*a);
	size_a = stack_size(*a);
	if (min_a_index < size_a / 2)
	{
		*method = &ft_ra;
		times = min_a_index;
	}
	else
	{
		*method = &ft_rra;
		times = size_a - min_a_index;
	}
	return (times);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	times;
	int	somthing;
	int	(*method)(t_stack **);

	somthing = 2;
	while (somthing)
	{
		times = choose_method(a, &method);
		while (times)
		{
			(*method)(a);
			times--;
		}
		ft_pb(a, b);
		somthing--;
	}
	sort_3(a);
	ft_pa(a, b);
	ft_pa(a, b);
}
