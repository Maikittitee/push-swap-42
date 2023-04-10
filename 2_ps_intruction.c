/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_ps_intruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:09:28 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/10 23:08:16 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sa sb ss pa pb ra rb rr rra rrb rrr

#include "push_swap.h"

int	ft_sa(t_stack **a)
{
	ft_putendl_fd("sa", 1);
	ft_swap(a);
	return (1);
}

int	ft_sb(t_stack **b)
{
	ft_putendl_fd("sb", 1);
	ft_swap(b);
	return (1);
}

int	ft_ss(t_stack **a, t_stack **b)
{
	ft_putendl_fd("ss", 1);
	ft_swap(a);
	ft_swap(b);
	return (1);	
}

int	ft_pa(t_stack **a, t_stack **b)
{
	ft_putendl_fd("pa", 1);
	ft_push(b, a);
	return (1);	
}

int	ft_pb(t_stack **a, t_stack **b)
{
	ft_putendl_fd("pb",1);
	ft_push(a, b);
	return (1);		
}

int	ft_ra(t_stack **a)
{
	ft_putendl_fd("ra",1);
	ft_rotate(a);
	return (1);
}

int	ft_rb(t_stack **b)
{
	ft_putendl_fd("rb",1);
	ft_rotate(b);
	return (1);
	
}

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

