/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:46:54 by true              #+#    #+#             */
/*   Updated: 2015/12/11 13:05:49 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *bufs;
	unsigned char c_uc;

	bufs = (unsigned char*)s;
	c_uc = (unsigned char)c;
	while (n > 0)
	{
		if (*bufs == c_uc)
		{
			return (bufs);
		}
		bufs++;
		n--;
	}
	return (NULL);
}
