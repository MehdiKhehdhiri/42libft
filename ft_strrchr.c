/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:43:11 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/01 22:45:22 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	chr;

	if (c > 256)
		c -= 256;
	str = (char *) s;
	chr = (unsigned char) c;
	i = 0;
	while (str[i] != 0)
		i++;
	while (i--)
	{
		if (str[i] == c)
			return (&str[i]);
	}
	if (!chr)
		return (&str[ft_strlen(s)]);
	return (0);
}
