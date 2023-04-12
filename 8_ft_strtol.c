/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8_ft_strtol.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:28:03 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 15:39:49 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issign(char c)
{
	return (c == '+' || c == '-');
}

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f')
		return (1);
	else if (c == '\r' || c == ' ')
		return (1);
	return (0);
}

long	ft_strtol(const char *str)
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
