/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 05:10:37 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/11/26 17:16:38 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_strlen(char *str);

char	*ft_strdup(const char *s)
{
	char	*dest;
	int	l;
	int	i;
	
	l = ft_strlen((char *)s);
	dest = malloc (sizeof(char) *l);
	i = 0;
	while (i < l)
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
