/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 07:39:01 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/30 07:39:06 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	if (!content)
	{
		head->content = NULL;
		head->content_size = 0;
	}
	else
	{
		head->content = (void *)malloc(content_size);
		if (head->content == NULL)
			return (NULL);
		ft_memcpy(head->content, content, content_size);
		head->content_size = content_size;
	}
	head->next = NULL;
	return (head);
}
