/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:41:57 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/24 12:42:02 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*c;

	if (!s || !f || (!(c = ft_strnew(ft_strlen(s)))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		c[i] = f(i, s[i]);
		i++;
	}
	return (c);
}
