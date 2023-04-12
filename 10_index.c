/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:57:22 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 15:29:48 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	fill_arr(int *arr, t_stack *node, int len)
{
	int	i;

	i = 0;
	if (!node)
		return ;
	while (i < len)
	{
		arr[i] = node->value;
		node = node->lower;
		i++;
	}
}

void	put_index(t_stack *stack)
{
	int	*arr;
	int	len;
	int	j;

	len = stack_size(stack);
	arr = malloc(len * sizeof(int));
	fill_arr(arr, stack, len);
	sort_int_tab(arr, len);
	while (stack)
	{
		j = 0;
		while (j < len)
		{
			if (stack->value == arr[j])
			{
				stack->index = j + 1;
				break ;
			}
			j++;
		}
		stack = stack->lower;
	}
	free(arr);
}
