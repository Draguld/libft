/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 03:06:41 by true              #+#    #+#             */
/*   Updated: 2015/12/11 20:44:42 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*strret;

	strret = (char *)malloc(sizeof(char) * size + 1);
	if (strret == NULL)
		return (NULL);
	ft_bzero(strret, size + 1);
	return (strret);
}
