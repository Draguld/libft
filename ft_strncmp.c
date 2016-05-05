/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:43:09 by true              #+#    #+#             */
/*   Updated: 2016/01/30 16:15:41 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1t;
	unsigned char	*s2t;

	s1t = (unsigned char*)s1;
	s2t = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1t[i] != '\0' && i < n - 1)
	{
		if (s1t[i] != s2t[i])
			return (s1t[i] - s2t[i]);
		i++;
	}
	return (s1t[i] - s2t[i]);
}
