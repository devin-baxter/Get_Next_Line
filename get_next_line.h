/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: debaxter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:53:51 by debaxter          #+#    #+#             */
/*   Updated: 2018/07/07 12:53:59 by debaxter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 64
# define NO_FILE (fd < 0 || !line);
# define NO_BUFF (BUFF_SIZE <= 0 || !(buf = ft_strnew(BUFF_SIZE +1)));
# define NO_READ (read(fd, buf, 0) == -1);
# define NO_LINE (gnl == NULL && !(gnl = ft_strnew(0)));

int		get_next_line(const int fd, char **line);
char	*ft_read_line (char **gnl, char *buf, int fd);
char	*ft_stock_line(char **gnl);

#endif