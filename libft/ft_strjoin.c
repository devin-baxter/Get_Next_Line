/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 13:14:28 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/28 13:14:30 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	if (s1 && s2)
	{
		join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (join)
		{
			join = ft_strcat(join, s1);
			join = ft_strcat(join, s2);
			return (join);
		}
	}
	else if (s1)
		return (ft_strdup(s1));
	else if (s2)
		return (ft_strdup(s2));
	return (NULL);
}
