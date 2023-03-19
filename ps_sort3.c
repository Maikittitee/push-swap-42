/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:31:35 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/20 00:05:22 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case1(t_stack **a)
{
	ft_sa(a);
	return (1);
}

int	ft_case2(t_stack **a)
{
	ft_sa(a);
	ft_rra(a);
	return (2);
}

int	ft_case3(t_stack **a)
{
	ft_ra(a);
	return (1);
}

int	ft_case5(t_stack **a)
{
	ft_rra(a);
	return (1);
}
int	sort_3(t_stack **a, t_stack **b)
{
	int	first;
	int	second;
	int	third;
	int	count;
	t_stack *runner;
	(void)b;

	runner = *a;

	first = runner->index;
	runner = runner->lower;
	second = runner-> index;
	runner = runner->lower;
	third = runner->index;
	count = 0;
	if (first > second && third > second && first < third)
		count += ft_case1(a);
	else if (first > second && second > third && first > third)
		count += ft_case2(a);
	else if (first > second && third > second && first > third)
		count += ft_case3(a);
	else if (first < second && second > third && first < third)
	{
		count += ft_case1(a);
		count += ft_case3(a);
	}
	else if (first < second && second > third && first > third)
		count += ft_case5(a);
	return (count);
	
}

