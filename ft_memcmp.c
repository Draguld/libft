/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:48:30 by true              #+#    #+#             */
/*   Updated: 2015/12/11 12:59:57 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*bufs1;
	unsigned char	*bufs2;

	bufs1 = (unsigned char*)s1;
	bufs2 = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (*bufs1 != *bufs2)
			return (*bufs1 - *bufs2);
		bufs1++;
		bufs2++;
		n--;
	}
	return (0);
}
