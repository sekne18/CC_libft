/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jans <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 21:18:50 by jans              #+#    #+#             */
/*   Updated: 2024/10/11 00:10:13 by jans             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*orig;

	while (lst)
	{
		tmp = lst->next;
		if (new == NULL)
		{
			new = ft_lstnew(f(lst->content));
			orig = new;
			if (!new)
				return (NULL);
		}
		else
		{
			new = ft_lstnew(f(lst->content));
			if (!new->next)
				return (NULL);
		}
		new = new->next;
		del(lst->content);
		lst = tmp;
	}
	return (orig);
}
