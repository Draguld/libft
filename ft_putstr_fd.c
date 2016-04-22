/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 23:47:09 by true              #+#    #+#             */
/*   Updated: 2015/12/12 15:59:17 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	if (fd == 2)
		ft_putstr(T_RED);
	write(fd, str, ft_strlen(str));
	if (fd == 2)
		ft_putstr(CLEAN_COLOR);
}
