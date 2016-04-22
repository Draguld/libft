/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:20:40 by true              #+#    #+#             */
/*   Updated: 2016/01/14 18:52:24 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isblank(char c)
{
	if (c == ' ' || c == '\t' ||
		c == ',' || c == '\n')
		return (1);
	return (0);
}

static int	ft_beginblank(char *str)
{
	int	begblank;

	begblank = 0;
	while (ft_isblank(*str) == 1)
	{
		begblank++;
		str++;
	}
	str = str - begblank;
	return (begblank);
}

static int	ft_endblank(char *str)
{
	int	endblank;

	endblank = 0;
	while (*str != '\0')
	{
		str++;
	}
	str--;
	while (ft_isblank(*str) == 1)
	{
		endblank++;
		str--;
	}
	str = str + endblank - ft_strlen(str);
	return (endblank);
}

char		*ft_strtrim(char const *s)
{
	int		begbl;
	int		endbl;
	char	*trim;
	size_t	i;

	i = 0;
	while (ft_isblank(s[i]) == 1)
	{
		i++;
		if (i == ft_strlen(s))
			return ("");
	}
	begbl = ft_beginblank((char *)s);
	endbl = ft_endblank((char *)s);
	trim = (char *)malloc((ft_strlen(s) + 1) - (begbl + endbl) * sizeof(*trim));
	if (trim == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s) - (begbl + endbl))
	{
		trim[i] = s[i + begbl];
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
