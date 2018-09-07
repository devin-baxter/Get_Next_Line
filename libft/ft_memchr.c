/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 14:49:56 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/22 14:52:19 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	k;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	k = (unsigned char)c;
	while (n)
	{
		if (str[i] == k)
		{
			return (str + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
