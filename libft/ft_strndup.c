/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 13:56:55 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/20 13:58:16 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *s1, size_t n)
{
	char *temp;

	if (!(temp = ft_strnew(n)))
		return (NULL);
	ft_strncpy(temp, s1, n);
	return (temp);
}
