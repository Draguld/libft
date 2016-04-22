/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:49:23 by true              #+#    #+#             */
/*   Updated: 2016/01/27 15:23:02 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *bufd;
	unsigned char *bufs;

	bufd = (unsigned char *)dest;
	bufs = (unsigned char *)src;
	if (dest > src)
	{
		bufd = bufd + n;
		bufs = bufs + n;
		while (n > 0)
		{
			*--bufd = *--bufs;
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (bufd);
}
