/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/09 19:40:26 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *node);

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
			ft_printf("%d\t%d\n",a->value,b->value);
			a = a->lower;
			b = b->lower;
			size_a--;
			size_b--;
		}
		else if (size_b >= size_a)
		{
			ft_printf(" \t%d\n",b->value);
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

int	radix_sort(t_stack **a, t_stack **b)
{
	int	count;
	unsigned char bit;
	int	size_a;
	int	size_b;
	int	i;
	int	boo;

	bit = 1;
	i = 3;
	int	sort_check = is_sort(*a);
	while (!sort_check)
	{
		size_a = stack_size(*a);
		while (size_a)
		{
			boo = (*a)->index & bit;
			if (boo)
				count += ft_rotate(a);
			else
				count += ft_push(a, b);
			size_a--;
		}
		size_b = stack_size(*b);
		while (size_b)
		{
			count += ft_push(b, a);
			size_b--;
		}
		i--;	
		bit *= 2;
		sort_check = is_sort(*a);
		ft_printf("Now count is: %d\n",count);
	}
	return (count);
}

int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
	int	count_intruction;

	a = NULL;
	b = NULL;
	init_stack(&a, av);
	put_index(a);
	visual_stack(a, b);
	sort_3(&a, &b);

	//ft_push(&stack_a,&stack_b);
	//visual_stack(stack_a , stack_b);

    return (0);
}