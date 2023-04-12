/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_inst_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:10:39 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 15:40:28 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
