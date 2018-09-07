/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 17:00:12 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/22 17:13:15 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
		dst[i + j] = 0;
	return (i + ft_strlen(src));
}
