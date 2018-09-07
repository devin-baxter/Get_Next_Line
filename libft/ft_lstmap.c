/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 09:50:45 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/30 09:50:47 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_clean(t_list *lst)
{
	t_list *temp;

	while (lst)
	{
		temp = lst->next;
		ft_memdel((void **)&lst);
		lst = temp;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;
	t_list	*head;

	elem = ft_lstnew(lst->content, lst->content_size);
	if (elem == NULL)
		return (NULL);
	elem = (*f)(elem);
	head = elem;
	while (lst->next)
	{
		lst = lst->next;
		elem->next = ft_lstnew(lst->content, lst->content_size);
		if (elem->next == NULL)
		{
			ft_clean(head);
			return (NULL);
		}
		elem->next = (*f)(elem->next);
		elem = elem->next;
	}
	return (head);
}
