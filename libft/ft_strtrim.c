/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 13:40:55 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/28 13:41:10 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	min;
	size_t	max;
	size_t	len;
	char	*b;

	if (!s)
		return (NULL);
	min = 0;
	while (s[min] != '\0' && (s[min] == ' ' || s[min] == '\n' ||
			s[min] == '\t'))
		min++;
	max = ft_strlen(s);
	while (min < max && (s[max - 1] == ' ' || s[max - 1] == '\n' ||
			s[max - 1] == '\t'))
		max--;
	len = max - min;
	b = ft_strsub(s, min, len);
	if (b)
		return (b);
	return (0);
}
