/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:32:56 by true              #+#    #+#             */
/*   Updated: 2016/01/06 13:08:52 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isblank(char c)
{
	if (c == '\t')
		return (0);
	if (c == '\v')
		return (0);
	if (c == '\f')
		return (0);
	if (c == '\r')
		return (0);
	if (c == '\n')
		return (0);
	if (c == ' ')
		return (0);
	return (1);
}

int			ft_atoi(char *str)
{
	int		i;
	int		result;
	int		isneg;

	i = 0;
	result = 0;
	isneg = 1;
	while (ft_isblank(str[i]) == 0)
		i++;
	isneg = (str[i] == '-') ? -1 : 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * isneg);
}
