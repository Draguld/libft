/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:52:22 by true              #+#    #+#             */
/*   Updated: 2015/12/11 18:44:14 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uic;
	char			*str;

	uic = (unsigned char)c;
	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == uic)
			return (str);
		str++;
	}
	if (uic == '\0')
		return (str++);
	return (NULL);
}
