/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_argument.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:24:55 by ktunchar          #+#    #+#             */
/*   Updated: 2023/04/20 15:07:37 by ktunchar         ###   ########.fr       */
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

static void	init_ik(t_ijk *some)
{
	some->i = 1;
	some->k = 0;
}

char	**ft_ultimate_split(char **av, char c)
{
	t_ijk	index;
	char	**sp;
	char	**ret;

	init_ik(&index);
	ret = ft_calloc(sizeof(char *), (ultimate_count_word(av, c) + 1));
	if (!ret)
		return (NULL);
	while (av[index.i])
	{
		index.j = 0;
		sp = ft_split(av[(index.i)++], c);
		while (sp[index.j])
		{
			ret[index.k] = ft_strdup(sp[index.j]);
			free(sp[(index.j)++]);
			if (!ret[(index.k)++])
			{
				ft_double_free_til_index(ret, index.k);
				return (NULL);
			}
		}
		free(sp);
	}
	return (ret);
}

int	ft_isspaces(char *av)
{
	if (!av)
		return (0);
	while (*av)
	{
		if (!ft_isspace(*av))
			return (0);
		av++;
	}
	return (1);
}

int	start_wzero(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]))
		i++;
	if ((ft_issign(str[i]) || str[i] == '0') && ft_strlen(str + i) > 1)
		return (1);
	return (0);
}
