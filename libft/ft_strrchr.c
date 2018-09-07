/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 18:27:13 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/22 18:31:38 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	char *temp;

	temp = (char *)s + ft_strlen(s);
	while (*temp != c)
	{
		if (temp == s)
			return ((char *)NULL);
		temp--;
	}
	return (temp);
}
