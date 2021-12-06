/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:03:39 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/06 21:02:44 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;
	char			*str;

	if (!s)
		return (0);
	i = -1;
	j = 0;
	l = start;
	if (start >= ft_strlen(s))
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	while (s[start++] && len-- > 0)
		j++;
	str = malloc(j * sizeof(char) + 1);
	if (!str)
		return (0);
	while (++i < j)
		str[i] = s[l++];
	str[i] = '\0';
	return (str);
}
