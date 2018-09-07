/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 14:39:15 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/28 14:39:17 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char const *str, char x)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] && str[i] == x)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != x)
			i++;
		result++;
		while (str[i] && str[i] == x)
			i++;
	}
	return (result);
}
