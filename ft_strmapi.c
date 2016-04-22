/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:56:08 by true              #+#    #+#             */
/*   Updated: 2015/12/11 12:56:10 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int					slen;
	char				*map;
	unsigned int		i;

	i = 0;
	slen = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
	map = (char *)malloc((slen + 1) * sizeof(*map));
	if (map == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
