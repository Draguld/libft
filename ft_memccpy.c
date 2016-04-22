/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:46:40 by true              #+#    #+#             */
/*   Updated: 2015/12/11 22:07:15 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*destbuf;
	unsigned char	*srcbuf;
	unsigned char	uchar;
	size_t			i;

	destbuf = (unsigned char*)dest;
	srcbuf = (unsigned char*)src;
	uchar = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		if ((*destbuf++ = *srcbuf++) == uchar)
			return (destbuf);
		i++;
	}
	return (NULL);
}
