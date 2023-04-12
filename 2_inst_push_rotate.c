/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_inst_push_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:11:50 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 15:38:06 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pa(t_stack **a, t_stack **b)
{
	ft_putendl_fd("pa", 1);
	ft_push(b, a);
	return (1);
}

int	ft_pb(t_stack **a, t_stack **b)
{
	ft_putendl_fd("pb", 1);
	ft_push(a, b);
	return (1);
}

int	ft_ra(t_stack **a)
{
	ft_putendl_fd("ra", 1);
	ft_rotate(a);
	return (1);
}

int	ft_rb(t_stack **b)
{
	ft_putendl_fd("rb", 1);
	ft_rotate(b);
	return (1);
}
