/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 14:09:17 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/22 16:48:39 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (j == size - 1)
				return ((char *)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
