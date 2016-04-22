/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:18:35 by true              #+#    #+#             */
/*   Updated: 2016/01/14 17:11:24 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *slong, const char *sshort)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (ft_strlen(sshort) < 1)
		return ((char*)slong);
	while (slong[i] != '\0')
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
