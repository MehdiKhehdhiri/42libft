/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:57:18 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/03 15:04:10 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*l;

	l = lst;
	i = 0;
	while (l)
	{
		l = l->next;
		i++;
	}
	return(i);
}