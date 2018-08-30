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

char	*ft_read_line (char **gnl, char *buf, int fd)
{
	char	*temp;
	int		rd_fd;

	rd_fd = 1;
	while (!(ft_strchr(*gnl, '\n')) && rd_fd)
	{
		rd_fd = read(fd, buf, BUFF_SIZE);
		if (rd_fd)
		{
			buf[rd_fd] = '\0';
			temp = *gnl;
			if (!(*gnl = ft_strjoin(*gnl, buf)))
				return (NULL);
			free(temp);
		}
	}
	free(buf);
	return (*gnl);
}

char	*ft_stock_line(char **gnl)
{
	char	*buffer;
	char	*new_line;
	char	*temp;

	buffer = ft_strchr(*gnl, '\n');
	temp = NULL;
	if (buffer)
	{
		if (!(new_line = ft_strndup(*gnl, buffer - *gnl)))
			return (NULL);
		temp = *gnl;
		if (!(*gnl = ft_strdup(buffer + 1)))
			return (NULL);
		free(temp);
	}
	else if (!(new_line = ft_strdup(*gnl)))
		return (NULL);
	if (!(*gnl) || !temp)
	{
		free(*gnl);
		*gnl = NULL;
	}
	return (new_line);
}

int		get_next_line(const int fd, char **line)
{
	static char	*gnl;
	char		*buf;

	*gnl = NULL;
	if (NO_FILE || NO_BUFF || NO_READ || NO_LINE)
		return (-1);
	if (!(ft_read_line(&gnl, buf, fd)))
		return (-1);
	if (*gnl)
	{
		if (!(*line = ft_stock_line(&gnl)))
			return (-1);
		return (1);
	}
	return (0);
}
