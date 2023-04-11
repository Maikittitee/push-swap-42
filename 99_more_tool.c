/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   99_more_tool.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:43:09 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/11 20:44:00 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	visual_stack(t_stack *a, t_stack *b)
{
	int	size_a;
	int	size_b;
	int	max;

	size_a = stack_size(a);
	size_b = stack_size(b);

	if (size_a > size_b)
		max = size_a;
	else
		max = size_b;
	while (max)
	{
		if (size_b == size_a)
		{
			ft_printf("%d\t%d\n",a->value, b->value);
			a = a->lower;
			b = b->lower;
			size_a--;
			size_b--;
		}
		else if (size_b >= size_a)
		{
			ft_printf("\t%d\n",b->value);
			b = b->lower;
			size_b--;
		}
		else
		{
			ft_printf("%d\t\n",a->value);
			a = a->lower;
			size_a--;
		}	
		max--;
	}
	ft_printf("_\t_\n");
	ft_printf("A\tB\n");	
}