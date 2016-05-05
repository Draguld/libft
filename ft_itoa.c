/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 12:48:41 by true              #+#    #+#             */
/*   Updated: 2016/01/14 18:57:55 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_signint(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	int		nsi[2];
	char	*arg;

	if (n == -2147483647 - 1)
		return (ft_strdup("-2147483648"));
	nsi[0] = ft_signint(n);
	nsi[1] = ft_intlen(n);
	if (n < 0)
		n = n * -1;
	arg = NULL;
	arg = (char *)malloc((nsi[0] + nsi[1] + 1) * sizeof(*arg));
	if (arg == NULL)
		return (NULL);
	arg = arg + nsi[0] + nsi[1];
	*arg = '\0';
	if (n == 0)
		*--arg = '0';
	while (n != 0)
	{
		*--arg = (n % 10) + '0';
		n = n / 10;
	}
	if (nsi[0] == 1)
		*--arg = '-';
	return (arg);
}
