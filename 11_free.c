/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 01:35:54 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 15:30:17 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_double_free_til_index(char **s, int j)
{
	int	i;

	i = 0;
	while (s[i] && i < j)
	{
		free(s[i]);
	}
	free(s);
}

void	ft_double_free(char **str)
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

void	ft_freestack(t_stack **s)
{
	t_stack	*temp;

	while (*s)
	{
		temp = (*s)->lower;
		free(*s);
		*s = temp;
	}
}
