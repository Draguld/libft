/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:19:10 by true              #+#    #+#             */
/*   Updated: 2016/01/14 17:23:34 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		index;
	char		*sres;

	index = 0;
	sres = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (sres == NULL)
		return (NULL);
	while (index < ft_strlen(s1))
	{
		sres[index] = s1[index];
		index++;
	}
	index = 0;
	while (index < ft_strlen(s2))
	{
		sres[index + ft_strlen(s1)] = s2[index];
		index++;
	}
	sres[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (sres);
}
