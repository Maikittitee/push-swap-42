/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:31:35 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/09 20:50:11 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a, t_stack **b)
{
	int	first;
	int	second;
	int	third;
	t_stack *runner;

	runner = *a;

	first = runner->index;
	runner = runner->lower;
	second = runner-> index;
	runner = runner->lower;
	third = runner->index;
	//ft_printf("%d %d %d\n",first,second,third);
	if (first > second && third > second)
	{
		if (first > third)
			ft_case3()
	}

}

// int	is_case1(t_stack *a)
// {
// 	int	first;
// 	int	second;
// 	int	third;

// 	first = a->index;
// 	a = a->lower;
// 	second = a-> index;
// 	a = a->lower;
// 	third = a->index;
// 	if ()

// }