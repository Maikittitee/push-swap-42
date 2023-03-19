/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:15:44 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/20 00:26:09 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Protect all intruction

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
	free(arr);
}

int	radix_sort(t_stack **a, t_stack **b)
{
	int	count;
	int bit;
	int	size_a;
	int	size_b;
	int	boo;


	bit = 1;
	count = 0;
	int	sort_check = is_sort(*a);
	while (!sort_check)
	{
		size_a = stack_size(*a);
		while (size_a)
		{
			boo = (*a)->index & bit;
			if (boo)
				count += ft_ra(a);
			else
				count += ft_pb(a, b);
			size_a--;
		}
		size_b = stack_size(*b);
		while (size_b)
		{
			count += ft_pa(a, b);
			size_b--;
		}
		bit *= 2;
		sort_check = is_sort(*a);
	}
	return (count);
}

int ft_issign(char c)
{
	return (c == '+' || c == '-');
}

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f')
		return (1);
	else if (c == '\r' || c == ' ')
		return (1);
	return (0);
}

long long	ft_strtol(const char *str)
{
	unsigned long	result;
	int				ngt;
	int				i;

	i = 0;
	result = 0;
	ngt = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] && ft_issign(str[i]))
	{
		if (str[i] == '-')
			ngt = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (ngt * result);
}

int	ft_stroverint(char *str)
{
	long num;

	num = ft_strtol(str);
	return (num > INT_MAX || num < INT_MIN);
}

int	is_err(char **str_arr)
{
	int	i;
	int	j;

	i = 0;
	while (str_arr[i])
	{
		j = 0;	
		while (str_arr[i][j])
		{
			if (!ft_isdigit(str_arr[i][j]) && !ft_issign(str_arr[i][j]))
				return (1);
			if (ft_issign(str_arr[i][j]) && (!str_arr[i][j + 1] || ft_isspace(str_arr[i][j + 1]) || ft_issign(str_arr[i][j + 1])))
				return (1);
			j++;
		}
		if (ft_stroverint(str_arr[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_repeat(char **s)
{
	int	i;
	int	j;
	int curr;
	
	i = 0;
	while (s[i])
	{
		j = i + 1;
		curr = ft_atoi(s[i]);
		while (s[j])
		{
			if (ft_atoi(s[j]) == curr)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	check_err(int ac, char **s)
{
	(void)ac;
	if (is_repeat(s) || is_err(s))
	{
		ft_putstr_fd("Error\n",STDERR_FILENO);
		exit (1);
	}
}
int	ft_sizewhat(char **av, char c)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			while (av[i][j] && av[i][j] == c)
				j++;
			if (av[i][j] && av[i][j] != c)
				count++;
			while (av[i][j] && av[i][j] != c)
				j++;
		}
		i++;
	}
	return (count);
}

char **ft_ultimate_split(char **av, char c)
{
	int	i;
	int	j;
	int	k;
	char **sp;
	char **ret;

	i = 1;
	k = 0;
	ret = malloc(sizeof(char *) * (ft_sizewhat(av, c) + 1));
	while (av[i])
	{
		j = 0;
		sp = ft_split(av[i],c);
		while (sp[j])
		{
			ret[k] = ft_strdup(sp[j]);
			free(sp[j]);
			j++;
			k++;
		}
		free(sp);
		i++;
	}
	ret[k] = NULL;
	return (ret);
}

void ft_double_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void ft_freestack(t_stack **s)
{
	t_stack *temp;
	while (*s)
	{
		temp = (*s)->lower;
		free(*s);
		*s = temp;
	}

}


int main(int ac, char **av)
{
    t_stack *a;
    t_stack *b;
	int	count_intruction;
	char **argument;

	if (ac < 2)
		return (0);
	argument = ft_ultimate_split(av, ' ');
	check_err(ac, argument);

	a = NULL;
	b = NULL;
	init_stack(&a, argument);
	put_index(a);
	if (is_sort(a))
	{
		ft_double_free(argument);
		ft_freestack(&a);
		return (0);
	}
//	visual_stack(a, b);
	if (stack_size(a) == 3)
		count_intruction = sort_3(&a, &b);
	else if (stack_size(a) == 5)
		count_intruction = sort_5(&a, &b);
	else {
		//printf("000=\n");
		count_intruction = radix_sort(&a,&b);
	}
	//ft_printf("-----after-----\n\n");
	//visual_stack(a ,b);
	//display_stack(a);
	//ft_printf("-----afterb-----\n");
	//display_stack(b);
	//ft_printf("----%d-----",count_intruction);
	ft_double_free(argument);
	ft_freestack(&a);


    return (0);
}