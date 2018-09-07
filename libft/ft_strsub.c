/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 13:04:11 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/28 13:04:12 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	i;

	if (!s)
		return (NULL);
	temp = ft_strnew(len);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		temp[i] = s[start];
		i++;
		start++;
	}
	return (temp);
}
