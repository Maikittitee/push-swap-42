/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 12:13:08 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/22 22:43:47 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "include/libft.h"
# include "include/ft_printf.h"
# include <limits.h>

typedef struct s_stack{
    int value;
    int index;
    struct s_stack *lower;
} t_stack;

// void    init_stack(t_stack **stack, char **av, int ac);
// t_stack		*stack_pop(t_stack **head_stack);
// void		stack_add(t_stack **head_stack, t_stack *new_node);
// t_stack	*new_stack_node(int value);
// int		display_stack(t_stack *stack);
// int		peek(t_stack *stack);
// int		ft_push(t_stack **src, t_stack **dst);
// int		ft_swap(t_stack **stack);
// int		ft_rotate(t_stack **stack);
// int		ft_rev_rotate(t_stack **stack);
// int		is_sort(t_stack *stack);
// int		is_empty(t_stack **stack);
// int		st_min(t_stack *node); //need fix to be an index
// int		inserting_sort(t_stack **a, t_stack **b);
// int		radix_sort(t_stack **a, t_stack **b);
// int		sort_3(t_stack **a, t_stack **b);
// int	    stack_size(t_stack *node);
// int	    sort_5(t_stack **a, t_stack **b);
// int	    ft_sa(t_stack **a);
// int	    ft_sb(t_stack **b);
// int	    ft_ss(t_stack **a, t_stack **b);
// int	    ft_pa(t_stack **a, t_stack **b);
// int	    ft_pb(t_stack **a, t_stack **b);
// int	    ft_ra(t_stack **a);
// int	    ft_rb(t_stack **b);
// int	    ft_rr(t_stack **a, t_stack **b);
// int	    ft_rra(t_stack **a);
// int	    ft_rrb(t_stack **b);
// int	    ft_rrr(t_stack **a, t_stack **b);
// void	visual_stack(t_stack *a, t_stack *b);
// void    sort_int_tab(int *tab, int size);
// int	stack_size(t_stack *node);
// void	fill_arr(int *arr, t_stack *node, int len);
// void	put_index(t_stack *stack);
// int	radix_sort(t_stack **a, t_stack **b);
// int ft_issign(char c);
// int	ft_isspace(char c);
// long	ft_strtol(const char *str);
// int	ft_stroverint(char *str);
// int	is_err(char **str_arr);
// int	is_repeat(char **s);
// void	check_err(int ac, char **s);
// char **ft_ultimate_split(char **av, char c);
// void ft_double_free(char **str);
// void ft_freestack(t_stack **s);

void	ft_sort(t_stack **a, t_stack **b);
int	is_empty(t_stack **stack);
int	is_sort(t_stack *stack);
int		peek(t_stack *stack);
t_stack	*new_stack_node(int value);
void		stack_add(t_stack **head_stack, t_stack *new_node);
t_stack		*stack_pop(t_stack **head_stack);
void    init_stack(t_stack **stack, char **av, int ac);
int		display_stack(t_stack *stack);
void	visual_stack(t_stack *a, t_stack *b);
int	stack_size(t_stack *node);
int	    ft_sa(t_stack **a);
int	    ft_sb(t_stack **b);
int	    ft_ss(t_stack **a, t_stack **b);
int	    ft_pa(t_stack **a, t_stack **b);
int	    ft_pb(t_stack **a, t_stack **b);
int	    ft_ra(t_stack **a);
int	    ft_rb(t_stack **b);
int	    ft_rr(t_stack **a, t_stack **b);
int	    ft_rra(t_stack **a);
int	    ft_rrb(t_stack **b);
int	    ft_rrr(t_stack **a, t_stack **b);
int	ft_push(t_stack **src, t_stack **dst);
int	ft_swap(t_stack **stack);
int	ft_rotate(t_stack **stack);
int	ft_rev_rotate(t_stack **stack);
int	sort_3(t_stack **a, t_stack **b);
int	get_min(t_stack *s);
int	sort_5(t_stack **a, t_stack **b);
void ft_double_free(char **str);
void ft_freestack(t_stack **s);
int	ft_sizewhat(char **av, char c);
char **ft_ultimate_split(char **av, char c);



int	ft_stroverint(char *str);
int	is_err(char **str_arr);
int	is_repeat(char **s);
void	check_err(int ac, char **s);
int ft_issign(char c);
int	ft_isspace(char c);
long	ft_strtol(const char *str);
int	radix_sort(t_stack **a, t_stack **b);
void    sort_int_tab(int *tab, int size);
void	fill_arr(int *arr, t_stack *node, int len);
void	put_index(t_stack *stack);


#endif