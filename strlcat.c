/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 05:21:01 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/11/26 16:07:26 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int ft_strlen(char *src);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	char	*s;

	s = (char *)src;
	if (size == 0)
		return(ft_strlen(dst) + ft_strlen(s));
	i = 0;
	j = 0;
	while (dst[j] != '\0')
		j++;

	while (i < (size - 1) && src[i] != '\0')
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + i);
}

