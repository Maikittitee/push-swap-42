/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:12:18 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/22 16:35:24 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*
int	main()
{
	t_list a,b,c;
	t_list *t;

	a.content = "a";
	b.content = "b";
	c.content = "c";
	
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	
	ft_lstclear()



}*/
