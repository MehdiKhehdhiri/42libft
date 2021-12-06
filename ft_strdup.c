/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 05:10:37 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/06 17:30:56 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		l;
	int		i;

	l = ft_strlen((char *)s);
	dest = malloc (sizeof(char) * (l + 1));
	if (!dest)
		return(0);
	i = 0;
	while (i < l)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
