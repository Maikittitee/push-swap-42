/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/01 18:07:17 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_int_tab(int *tab, int size)
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

int	stack_size(t_stack *node)
{
	int	i;

	i = 0;
	if (!node)
		return (0);
	while (node)
	{
		i++;
		node = node->lower;
	}
	return (i);
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
	//arr[i] = -1;
}

void	put_index(t_stack *stack)
{
	int	*arr;
	int	len;
	int	i;

	i = 0;

	len = stack_size(stack);
	arr = malloc(len * sizeof(int));
	fill_arr(arr, stack,len);
	sort_int_tab(arr, len);
	while (stack)
	{
		int	j = 0;
		while (j < len)
		{
			if (stack->value == arr[j])
			{
				stack->index = j + 1;
				break;
			}
			j++;
		}
		stack = stack->lower;
	}
}
// int	radix_sort(t_stack **a, t_stack **b)
// {
// 
// }

int main(int ac, char **av)
{
    t_stack *stack_a;
    t_stack *stack_b;
	int	count_intruction;

	stack_a = NULL;
	stack_b = NULL;
	init_stack(&stack_a, av);
	put_index(stack_a);
	ft_printf("Stack size: %d\n",stack_size(stack_a));
	// int	arr[4];
	// arr[0] = 4;
	// arr[1] = 5;
	// arr[2] = 1;
	// arr[3] = 2;

	// sort_int_tab(arr,4);
	// ft_printf("\narr: %d\n",arr[0]);
	// ft_printf("arr: %d\n",arr[1]);
	// ft_printf("arr: %d\n",arr[2]);
	// ft_printf("arr: %d\n",arr[3]);


	display_stack(stack_a);
	// ft_printf("peek of A is: %d\n", peek(stack_a));
	// ft_printf("is stack sort? : %d\n", is_sort(stack_a));
//	ft_printf("-----------------------A------------------\n");
	// //count_intruction = inserting_sort(&stack_a, &stack_b);
	// count_intruction = radix_sort(&stack_a, &stack_b);
	// display_stack(stack_a);
	// ft_printf("-------------------B--------------------------\n");
	// display_stack(stack_b);
	// ft_printf("Summary intruction is %d\n",count_intruction);
    return (0);
}