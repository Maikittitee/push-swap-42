/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_argument.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:24:55 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/12 17:37:12 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ultimate_count_word(char **av, char c)
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

char	**ft_ultimate_split(char **av, char c)
{
	int		i;
	int		j;
	int		k;
	char	**sp;
	char	**ret;

	i = 1;
	k = 0;
	ret = malloc(sizeof(char *) * (ultimate_count_word(av, c) + 1));
	while (av[i])
	{
		j = 0;
		sp = ft_split(av[i++], c);
		while (sp[j])
		{
			ret[k++] = ft_strdup(sp[j]);
			free(sp[j++]);
		}
		free(sp);
	}
	ret[k] = NULL;
	return (ret);
}
