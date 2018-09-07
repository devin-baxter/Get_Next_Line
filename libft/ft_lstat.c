/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 09:58:18 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/30 09:58:19 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *lst, size_t value)
{
	size_t i;

	i = 0;
	while (i < value && lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
