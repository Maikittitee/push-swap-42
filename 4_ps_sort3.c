/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_ps_sort3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:31:35 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 15:41:28 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_case1(t_stack **a)
{
	ft_sa(a);
	return (1);
}

static int	ft_case2(t_stack **a)
{
	ft_sa(a);
	ft_rra(a);
	return (2);
}

static int	ft_case3(t_stack **a)
{
	ft_ra(a);
	return (1);
}

static int	ft_case5(t_stack **a)
{
	ft_rra(a);
	return (1);
}

void	sort_3(t_stack **a)
{
	int		first;
	int		second;
	int		third;
	t_stack	*runner;

	runner = *a;
	first = runner->index;
	runner = runner->lower;
	second = runner-> index;
	runner = runner->lower;
	third = runner->index;
	if (first > second && third > second && first < third)
		ft_case1(a);
	else if (first > second && second > third && first > third)
		ft_case2(a);
	else if (first > second && third > second && first > third)
		ft_case3(a);
	else if (first < second && second > third && first < third)
	{
		ft_case1(a);
		ft_case3(a);
	}
	else if (first < second && second > third && first > third)
		ft_case5(a);
}
