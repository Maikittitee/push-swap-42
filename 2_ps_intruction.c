/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_intruction.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:09:28 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/20 00:04:09 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sa sb ss pa pb ra rb rr rra rrb rrr

#include "push_swap.h"

int	ft_sa(t_stack **a)
{
	ft_printf("sa\n");
	ft_swap(a);
	return (1);
}

int	ft_sb(t_stack **b)
{
	ft_printf("sb\n");
	ft_swap(b);
	return (1);
}

int	ft_ss(t_stack **a, t_stack **b)
{
	ft_printf("ss\n");
	ft_swap(a);
	ft_swap(b);
	return (1);	
}

int	ft_pa(t_stack **a, t_stack **b)
{
	ft_printf("pa\n");
	ft_push(b, a);
	return (1);	
}

int	ft_pb(t_stack **a, t_stack **b)
{
	ft_printf("pb\n");
	ft_push(a, b);
	return (1);		
}

int	ft_ra(t_stack **a)
{
	ft_printf("ra\n");
	ft_rotate(a);
	return (1);
}

int	ft_rb(t_stack **b)
{
	ft_printf("rb\n");
	ft_rotate(b);
	return (1);
	
}

int	ft_rr(t_stack **a, t_stack **b)
{
	ft_printf("rr\n");
	ft_rotate(a);
	ft_rotate(b);
	return (1);
	
}

int	ft_rra(t_stack **a)
{
	ft_printf("rra\n");
	ft_rev_rotate(a);
	return (1);	
}

int	ft_rrb(t_stack **b)
{
	ft_printf("rrb\n");
	ft_rev_rotate(b);
	return (1);	
	
}

int	ft_rrr(t_stack **a, t_stack **b)
{
	ft_printf("rrr\n");
	ft_rev_rotate(a);
	ft_rev_rotate(b);
	return (1);	
	
}

