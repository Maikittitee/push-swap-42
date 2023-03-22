/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_argument.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:24:55 by ktunchar          #+#    #+#             */
/*   Updated: 2023/03/22 22:17:56 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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