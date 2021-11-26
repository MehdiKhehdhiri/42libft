/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:29:36 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/11/26 19:10:41 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	chr;
	size_t		i;

	chr = (unsigned char) c;
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == chr)
			return ((void *)&src[i]);
		i++;
	}
	return (0);
}
