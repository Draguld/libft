/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:53:44 by true              #+#    #+#             */
/*   Updated: 2015/12/11 14:10:04 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*bufsrc;
	int		len;

	len = ft_strlen(dest) + ft_strlen(src);
	bufsrc = (char *)src;
	while (*dest != '\0')
		dest++;
	while (*bufsrc != '\0')
	{
		*dest = *bufsrc;
		dest++;
		bufsrc++;
	}
	*dest = '\0';
	return (dest - len);
}
