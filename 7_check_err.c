/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_check_err.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:26:29 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/16 23:12:44 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_is_over_int(char **s)
{
	long	num;
	int		i;

	i = 0;
	while (s[i])
	{
		num = ft_strtol(s[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	is_format_err(char **str_arr)
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
			if (ft_isdigit(str_arr[i][j]) && \
			(str_arr[i][j + 1] && !ft_isdigit(str_arr[i][j + 1])) && \
			(str_arr[i][j + 1] && ft_isdigit(str_arr[i][j + 2])))
				return (1);
			if (ft_issign(str_arr[i][j]) && \
			(!str_arr[i][j + 1] || ft_isspace(str_arr[i][j + 1]) \
			|| ft_issign(str_arr[i][j + 1])))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_repeat(char **s)
{
	int	i;
	int	j;
	int	curr;

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

void	check_arg(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (!av[i][0] || ft_isspaces(av[i]))
		{
			ft_putendl_fd("Error", 2);
			exit(0);
		}
		i++;
	}
}

void	check_err(char **s)
{
	if (!s || !(*s) || is_repeat(s) || is_format_err(s) || str_is_over_int(s))
	{
		ft_putendl_fd("Error", 2);
		exit(0);
	}
}
