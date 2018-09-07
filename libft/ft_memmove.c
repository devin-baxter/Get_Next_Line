/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 14:53:42 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/22 15:02:22 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (dst <= src)
		ft_memcpy(dst, src, len);
	else
	{
		while ((int)len--)
			ptr1[len] = ptr2[len];
	}
	return (ptr1);
}
