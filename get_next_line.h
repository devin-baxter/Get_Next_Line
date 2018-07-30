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
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

# define BUFF_SIZE 64

int		get_next_line(const int fd, char **line);

#endif