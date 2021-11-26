/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:47:48 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/11/26 16:03:38 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
int	ft_strlen(char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	char	*s;

	s = (char *)src;
	if (size == 0)
		return(ft_strlen(s));
	i = 0;
	while (i < (size - 1) && s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
