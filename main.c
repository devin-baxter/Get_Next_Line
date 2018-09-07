/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:53:31 by debaxter          #+#    #+#             */
/*   Updated: 2018/09/06 20:08:02 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	line = NULL;
	fd = open(argv[argc - 1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		ft_putendl(line);
	}
	close(fd);
}
