/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:57:11 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/06 22:05:42 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*newlist;
	t_list	*newelem;

	if (lst != 0 && f != 0)
	{
		newlist = ft_lstnew(f(lst->content));
		newelem = newlist;
		while (lst->next)
		{
			lst = lst->next;
			newelem->next = ft_lstnew(ft_strdup(f(lst->content)));
			if (newelem->next == 0)
			{
				ft_lstclear(&newlist, del);
				return (0);
			}
			newelem = newelem->next;
		}
		return (newlist);
	}
	return (0);
}
