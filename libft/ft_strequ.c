/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:56:43 by debaxter          #+#    #+#             */
/*   Updated: 2018/04/20 14:59:49 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;

	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	i = ft_strcmp(s1, s2);
	if (i != 0)
		return (0);
	else
		return (1);
}
