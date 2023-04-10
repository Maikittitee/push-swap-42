/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_check_err.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:26:29 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/10 23:59:52 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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
			if (ft_isdigit(str_arr[i][j]) && (str_arr[i][j+1] && !ft_isdigit(str_arr[i][j + 1])) && (str_arr[i][j+1] && ft_isdigit(str_arr[i][j+2])))
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

void	check_err(char **s)
{
	if (is_repeat(s) || is_err(s))
	{
		ft_putendl_fd("Error",2);
		exit(0);
	}
}