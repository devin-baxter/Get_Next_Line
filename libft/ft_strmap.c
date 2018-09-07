/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:17:22 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/24 12:17:23 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*ptr;

	if (!s || !f || (!(ptr = ft_strnew(ft_strlen(s)))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr[i] = f((char)s[i]);
		i++;
	}
	return (ptr);
}
