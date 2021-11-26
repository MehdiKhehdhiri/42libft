/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:06:35 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/11/26 16:16:48 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str);

int	ft_inset(char c,const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		l;
	int		i;
	int		j;

	l = ft_strlen((char *)s1);
	res = malloc(l + 1);
	if (!res)
		return ('\0');
	j = 0;
	i = 0;
	while (i < l)
	{
		if (!ft_inset(s1[i],set))
		{
			res[j] = s1[i];
			j++;
		}
		i++;
	}
	res[j] = '\0';
	return (res);
}
