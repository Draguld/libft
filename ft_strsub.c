/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:47:26 by true              #+#    #+#             */
/*   Updated: 2015/11/26 15:43:35 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*ptr;

	index = 0;
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (index < len)
	{
		ptr[index] = s[index + start];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
