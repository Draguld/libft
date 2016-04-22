/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: true <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 05:04:23 by true              #+#    #+#             */
/*   Updated: 2016/02/11 05:04:25 by true             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*buf;
	t_list	*buf2;

	if (!lst || !f)
		return (NULL);
	buf2 = f(lst);
	if ((result = ft_lstnew(buf2->content, buf2->content_size)))
	{
		buf = result;
		lst = lst->next;
		while (lst)
		{
			buf2 = f(lst);
			if (!(buf->next = ft_lstnew(buf2->content, buf2->content_size)))
				return (NULL);
			buf = buf->next;
			lst = lst->next;
		}
	}
	return (result);
}
