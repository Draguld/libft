/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:55:11 by true              #+#    #+#             */
/*   Updated: 2015/12/11 21:35:39 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int		index;

	index = 0;
	if (s == NULL || f == NULL)
		return ;
	while (*s != '\0')
	{
		f(index, s);
		s++;
		index++;
	}
}
