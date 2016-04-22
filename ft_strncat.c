/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:56:22 by true              #+#    #+#             */
/*   Updated: 2015/12/11 14:13:50 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*bufsrc;
	size_t	len;

	bufsrc = (char *)src;
	len = ft_strlen(dest);
	while (*dest != '\0')
		dest++;
	while (*bufsrc != '\0' && n > 0)
	{
		*dest = *bufsrc;
		dest++;
		bufsrc++;
		n--;
		len++;
	}
	*dest = '\0';
	return (dest - len);
}
