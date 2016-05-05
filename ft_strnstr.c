/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:17:40 by true              #+#    #+#             */
/*   Updated: 2016/01/30 17:15:24 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *slong, char const *sshort, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (ft_strlen(sshort) < 1)
		return ((char*)slong);
	while (slong[i] != '\0' && i < len)
	{
		if (slong[i] == sshort[j])
		{
			j++;
			if (j == ft_strlen(sshort))
				return (((char*)slong) + i - j + 1);
		}
		else
		{
			i = i - j;
			j = 0;
		}
		i++;
	}
	return (NULL);
}
