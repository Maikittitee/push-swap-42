/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   9_radix_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:54:42 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 15:44:31 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack **a, t_stack **b)
{
	int	size_a;
	int	size_b;
	int	bit;

	bit = 1;
	while (!is_sort(*a))
	{
		size_a = stack_size(*a);
		while (size_a--)
		{
			if ((*a)->index & bit)
				ft_ra(a);
			else
				ft_pb(a, b);
		}
		size_b = stack_size(*b);
		while (size_b--)
			ft_pa(a, b);
		bit <<= 1;
	}
}
