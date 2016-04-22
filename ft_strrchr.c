/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:16:38 by true              #+#    #+#             */
/*   Updated: 2016/01/30 17:29:25 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*bufs;
	unsigned char	bufc;
	int				i;

	bufs = (char *)s;
	bufc = (unsigned char)c;
	i = 0;
	while (*bufs)
	{
		i++;
		bufs++;
	}
	while (i > -1)
	{
		if (*(bufs--) == (char)bufc)
			return (++bufs);
		i--;
	}
	return (NULL);
}
