/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:54:09 by debaxter          #+#    #+#             */
/*   Updated: 2018/07/07 12:54:29 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_gnl(char **gnl, char *buf, int fd)
{
	char	*temp;
	int		ret;

	ret = 1;
	while (!(ft_strchr(*gnl, '\n')) && ret)
	{
		ret = read(fd, buf, BUFF_SIZE);
		if (ret)
		{
			buf[ret] = '\0';
			temp = *gnl;
			if (!(*gnl = ft_strjoin(*gnl, buf)))
				return (NULL);
			free(temp);
		}
	}
	free(buf);
	return (*gnl);
}

char	*stock_line(char **gnl)
{
	char	*newline;
	char	*temp;
	char	*buf;

	buf = ft_strchr(*gnl, '\n');
	temp = NULL;
	if (buf)
	{
		if (!(newline = ft_strndup(*gnl, buf - *gnl)))
			return (NULL);
		temp = *gnl;
		if (!(*gnl = ft_strdup(buf + 1)))
			return (NULL);
		free(temp);
	}
	else if (!(newline = ft_strdup(*gnl)))
		return (NULL);
	if (!(*gnl) || !temp)
	{
		free(*gnl);
		*gnl = NULL;
	}
	return (newline);
}

int		get_next_line(const int fd, char **line)
{
	static char	*gnl;
	char		*buf;

	*gnl = 0;
	if (fd < 0 || !line || BUFF_SIZE <= 0 || BUFF_SIZE > 9999999 ||
		!(buf = ft_strnew(BUFF_SIZE + 1)) || read(fd, buf, 0) == -1 ||
		(gnl == NULL && !(gnl = ft_strnew(0))))
		return (-1);
	if (!(read_gnl(&gnl, buf, fd)))
		return (-1);
	if (*gnl)
	{
		if (!(*line = stock_line(&gnl)))
			return (-1);
		return (1);
	}
	return (0);
}
