/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_temp_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:21:17 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/01 01:44:20 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	temp_stack(t_stack **a, t_stack **b)
{
	//int	below;
	int swap_back;
	int i = 10;
	ft_push(a,b);
	while (i--)
	{
		//tar = stack_peek(a);
		if (stack_peek(*b) < get_lower(*b) )
		{
			ft_swap(b);
			//ft_printf("Helllll top b: %d, lower b: %d\n",stack_peek(*b),get_lower(*b));
			ft_push(b, a);
			//ft_printf("uuuuuu top b: %d, lower b: %d\n",stack_peek(*b),get_lower(*b));
		}
		if (stack_peek(*a) < stack_peek(*b))
		{
			ft_push(a, b);
			//ft_swap(b);
			//ft_push(b, a);
		}
		else
		{
			ft_push(a, b);
		} 
		//ft_printf("below is: %d\n",below);
		
		
		ft_printf("top b: %d, lower b: %d\n",stack_peek(*b),get_lower(*b));
	}
}