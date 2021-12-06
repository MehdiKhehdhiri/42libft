/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 04:42:36 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/02 14:26:24 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*t;

	t = malloc (nmemb * size);
	if (!t)
		return (0);
	ft_memset(t, 0, nmemb * size);
	return (t);
}
