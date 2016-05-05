/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:55:55 by true              #+#    #+#             */
/*   Updated: 2015/12/11 12:55:57 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		slen;
	char	*map;

	slen = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
	map = (char *)malloc((slen + 1) * sizeof(*map));
	if (map == NULL)
		return (NULL);
	while (*s != '\0')
	{
		*map = f(*s);
		s++;
		map++;
	}
	*map = '\0';
	return (map = map - slen);
}
