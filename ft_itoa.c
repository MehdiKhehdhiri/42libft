/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 14:58:39 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/11/29 22:33:36 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_intlen(int n)
{
	unsigned int	len;
	unsigned int	un;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	un = n;
	if (un == 0)
		len++;
	while (un > 0)
	{
		len++;
		un /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	un;
	char			*res;

	i = ft_intlen(n);
	res = malloc((i + 1) * sizeof(char));
	if (!res)
		return (0);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	un = n;
	res[i--] = '\0';
	if (n == 0)
		res[0] = '0';
	while (un > 0)
	{
		res[i--] = '0' + un % 10;
		un /= 10;
	}
	return (res);
}
