/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:01:46 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/11/22 20:20:14 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*a;

	a = (unsigned char *)b;
	while (len)
	{
		*a++ = (unsigned char) c;
		len--;
	}
	b = a;
	return (b);
}
