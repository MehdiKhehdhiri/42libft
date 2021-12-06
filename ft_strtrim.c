/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhedhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:06:35 by mkhedhir          #+#    #+#             */
/*   Updated: 2021/12/06 16:53:59 by mkhedhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

int	ft_inset(char c, const char *set)
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

int	count_set(char const *s1, char const *set, int l)
{
int	i;
int	j;

i = 0;
j = 0;
while (i < l)
{
if (ft_inset(s1[i], set))
j++;
i++;
}
return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
char	*res;
int		l;
int		i;
int		j;

if (!s1 || !set)
return (0);
l = ft_strlen((char *)s1);
i = 0;
j = count_set(s1, set, l);
res = malloc(l - j + 1);
if (!res)
return ("\0");
j = 0;
i = 0;
while (i < l)
{
if (!ft_inset(s1[i], set))
res[j++] = s1[i];
i++;
}
res[j] = '\0';
return (res);
}*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len;
	char		*str;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	str = ft_substr((char *) s1, 0, len + 1);
	return (str);
}
