/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 02:28:18 by true              #+#    #+#             */
/*   Updated: 2015/12/11 15:56:03 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*bufdst;
	unsigned char	*bufsrc;
	size_t			i;

	i = 0;
	if (n == 0 || dst == src)
		return (dst);
	bufdst = (unsigned char *)dst;
	bufsrc = (unsigned char *)src;
	while (--n)
	{
		*bufdst = *bufsrc;
		bufdst++;
		bufsrc++;
		i++;
	}
	*bufdst = *bufsrc;
	return (bufdst = bufdst - i);
}
