/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:47:59 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/01 20:09:16 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*l;
	char	*b;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	b = (char *) big;
	l = (char *) little;
	if (l[i] == '\0')
		return (b);
	while (b[i] != '\0' && i < len)
	{
		while (b[i + j] == l[j] && i + j < len)
		{
			if (l[j + 1] == '\0')
				return (&b[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
