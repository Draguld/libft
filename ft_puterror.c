/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puterror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 05:28:34 by true              #+#    #+#             */
/*   Updated: 2016/02/11 05:33:50 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puterror(char *str)
{
	ft_putstr(T_RED);
	if (ft_strlen(str) > 0)
	{
		ft_putstr(str);
		ENDL;
	}
	else
		ft_putstr("ERROR.\n");
	ft_putstr(CLEAN_COLOR);
}
