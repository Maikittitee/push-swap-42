/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_inst_rev_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:09:28 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/11 22:12:41 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sa sb ss pa pb ra rb rr rra rrb rrr

#include "push_swap.h"

int	ft_rr(t_stack **a, t_stack **b)
{
	ft_putendl_fd("rr", 1);
	ft_rotate(a);
	ft_rotate(b);
	return (1);
}

int	ft_rra(t_stack **a)
{
	ft_putendl_fd("rra", 1);
	ft_rev_rotate(a);
	return (1);
}

int	ft_rrb(t_stack **b)
{
	ft_putendl_fd("rrb", 1);
	ft_rev_rotate(b);
	return (1);
}

int	ft_rrr(t_stack **a, t_stack **b)
{
	ft_putendl_fd("rrr", 1);
	ft_rev_rotate(a);
	ft_rev_rotate(b);
	return (1);
}

