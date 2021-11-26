/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 22:01:49 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/11/24 22:39:44 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	while (n--)
	{
		if (*str1++ != *str2++)
			return (*str1 - *str2);
	}
	return (0);
}
