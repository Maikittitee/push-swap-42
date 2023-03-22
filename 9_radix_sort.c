/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9_radix_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:54:42 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/22 21:55:01 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	radix_sort(t_stack **a, t_stack **b)
{
	int	count;
	int bit;
	int	size_a;
	int	size_b;
	int	boo;


	bit = 1;
	count = 0;
	int	sort_check = is_sort(*a);
	while (!sort_check)
	{
		size_a = stack_size(*a);
		while (size_a)
		{
			boo = (*a)->index & bit;
			if (boo)
				count += ft_ra(a);
			else
				count += ft_pb(a, b);
			size_a--;
		}
		size_b = stack_size(*b);
		while (size_b)
		{
			count += ft_pa(a, b);
			size_b--;
		}
		bit *= 2;
		sort_check = is_sort(*a);
	}
	return (count);
}
