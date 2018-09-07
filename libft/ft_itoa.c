/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 18:02:47 by debaxter          #+#    #+#             */
/*   Updated: 2018/05/03 14:16:13 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_size(int n)
{
	int size;

	if (n > 2147483647 || n < -2147483648)
		return (0);
	size = 1;
	while (n /= 10)
		size++;
	return (size);
}

char		*ft_itoa(int n)
{
	long	nbr;
	size_t	count;
	char	*str;
	char	neg;

	nbr = n;
	neg = (nbr < 0 ? 1 : 0);
	count = ft_int_size(nbr);
	str = ft_strnew(count + neg);
	if (str == NULL)
		return (NULL);
	if (neg)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	while (count > 0)
	{
		str[count + neg - 1] = (nbr % 10) + '0';
		count--;
		nbr /= 10;
	}
	return (str);
}
