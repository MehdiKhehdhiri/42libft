/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 03:55:38 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/06 21:00:01 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\r')
		return (1);
	if (c == '\v' || c == '\f' || c == ' ')
		return (1);
	return (0);
}

int	check_sign(const char *str, int i, int *neg)
{
	int	f;

	f = 0;
	if ((str[i] == '-' || str[i] == '+') && !f)
	{
		if (str[i] == '-')
			*neg = -1;
		i++;
		f++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int			i;
	long long	nb;
	int			neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (is_space(nptr[i]))
		i++;
	i = check_sign(nptr, i, &neg);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nb *= 10;
		nb += (nptr[i] - '0');
		i++;
		if (nb > 2147483647 && neg == 1)
			return (-1);
	}
	if (nb < -2147483648 - 1)
		return (0);
	return ((int)nb * neg);
}
