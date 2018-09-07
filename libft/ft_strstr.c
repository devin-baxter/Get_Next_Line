/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:22:31 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/20 14:28:32 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *haystack, char const *needle)
{
	int i;
	int j;
	int k;
	int found;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	i = -1;
	found = 0;
	while (*(haystack + ++i) && !found)
	{
		if (*(haystack + i) == *(needle + 0))
		{
			j = 0;
			k = i;
			found = 1;
			while (*(needle + j))
				if (*(needle + j++) != *(haystack + k++))
					found = 0;
			if (found)
				return ((char *)haystack + i);
		}
	}
	return (NULL);
}
