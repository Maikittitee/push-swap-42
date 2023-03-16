/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:01:40 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/16 23:14:33 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stack *s) //need fix to  be an index
{
	int	index;
	int	min;

	min  = st_min(s);
	index = 0;
	while (s)
	{
		if (s->value == min)
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
		min_a_index = get_min(*a);
		size_a = stack_size(*a);
		if (min_a_index < size_a / 2)
		{
			method = &ft_rotate;
			times = min_a_index;
		}
		else
		{
			method = &ft_rev_rotate;
			times = size_a - min_a_index;
		}
		while (times)
		{
			count += (*method)(a);
			times--;
		}
		count += ft_push(a,b);
		somthing--;
	}
	count += sort_3(a,b);
	ft_push(b,a);
	ft_push(b,a);
	return (count);

}