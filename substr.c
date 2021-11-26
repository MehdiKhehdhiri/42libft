/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:03:39 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/11/25 21:00:48 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(len + 1);
	if (!res)
		return (0);
	while (len--)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
