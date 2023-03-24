/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_ps_sort5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:01:40 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/24 12:58:47 by ktunchar         ###   ########.fr       */
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

int	sort_5(t_stack **a, t_stack **b)
{
	int	size_a;
	int	min_a_index;
	int	count;
	int	times;
	int	somthing;
	int	(*method)(t_stack **);

	count = 0;
	somthing = 2;
	while (somthing)
	{
		min_a_index = times_to_get_min(*a);
		size_a = stack_size(*a);
		if (min_a_index < size_a / 2)
		{
			method = &ft_ra;
			times = min_a_index;
		}
		else
		{
			method = &ft_rra;
			times = size_a - min_a_index;
		}
		while (times)
		{
			count += (*method)(a);
			times--;
		}
		count += ft_pb(a,b);
		somthing--;
	}
	count += sort_3(a,b);
	ft_pa(a,b);
	ft_pa(a,b);	
	return (count);

}