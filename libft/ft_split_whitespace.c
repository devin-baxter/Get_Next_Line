/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 17:04:44 by debaxter          #+#    #+#             */
/*   Updated: 2018/05/03 14:18:09 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countwords(char *str)
{
	int wc;

	wc = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str = str + 1;
	if (*str)
		wc = 1;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			while (*str == ' ' || *str == '\t' || *str == '\n')
				str++;
			if (*str)
				wc++;
		}
		if (*str)
			str++;
	}
	return (wc);
}

char			**ft_split_whitespace(char *str)
{
	char	**list;
	int		i;
	int		j;

	i = 0;
	list = (char **)malloc(ft_countwords(str) * sizeof(char*));
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			while (*str == ' ' || *str == '\t' || *str == '\n')
				str = str + 1;
		}
		else
		{
			j = 0;
			list[i] = (char *)malloc(256 * sizeof(char));
			while (*str != ' ' && *str != '\t' && *str != '\n' && *str)
				list[i][j++] = *str++;
			list[i][j] = '\0';
			i++;
		}
	}
	list[i] = 0;
	return (list);
}
