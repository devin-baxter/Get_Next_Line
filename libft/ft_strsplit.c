/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 14:43:07 by debaxter          #+#    #+#             */
/*   Updated: 2018/05/03 14:20:09 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_str_count_malloc(char *s, char c)
{
	size_t	i;
	size_t	words;
	char	**dst;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	if (!(dst = (char **)malloc(sizeof(char *) * (words + 1))))
		return ((void *)0);
	dst[words] = (void *)0;
	return (dst);
}

static size_t	ft_letter_count(char *s, char c)
{
	size_t	lc;
	size_t	i;

	i = 0;
	lc = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		lc++;
	}
	return (lc);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	words;
	size_t	letters;
	size_t	i;
	char	**dst;

	if (!s || !(dst = ft_str_count_malloc((char *)s, c)))
		return ((void *)0);
	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			letters = ft_letter_count((char *)&s[i], c);
			if (!(dst[words] = ft_strnew(letters)))
				return (dst);
			dst[words] = ft_strsub((char *)s, i, letters);
			words++;
			i = i + letters - 1;
		}
		i++;
	}
	return (dst);
}
