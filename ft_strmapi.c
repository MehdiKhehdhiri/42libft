/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:06:36 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/01 22:47:33 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	str = malloc (ft_strlen(s) + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	i = 0;
	while (str[i] != '\0')
	{
		str [i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
