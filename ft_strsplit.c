/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:21:14 by true              #+#    #+#             */
/*   Updated: 2015/12/11 14:33:51 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbosub(char const *s, char c)
{
	int		cur;
	int		go;

	cur = 0;
	go = 1;
	while (*s != '\0')
	{
		if (*s == c && go == 0)
			go = 1;
		else if (*s != c && go == 1)
		{
			cur++;
			go = 0;
		}
		s++;
	}
	return (cur);
}

static int	ft_sublen(char const *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tabstr;
	int		i;
	int		nsub;

	i = 0;
	nsub = ft_nbosub(s, c);
	tabstr = (char **)malloc(sizeof(*tabstr) * (nsub + 1));
	if (tabstr == NULL)
		return (NULL);
	while (nsub-- > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		tabstr[i] = ft_strsub(s, 0, (size_t)ft_sublen(s, c));
		if (tabstr[i] == NULL)
			return (NULL);
		s = s + ft_sublen(s, c);
		i++;
	}
	tabstr[i] = NULL;
	return (tabstr);
}
