/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmorand <hmorand@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:23:32 by hmorand           #+#    #+#             */
/*   Updated: 2024/02/20 11:23:32 by hmorand          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1048576
# endif

typedef struct s_reader
{
	int		fd;
	int		buffer_location;
	int		buffer_size;
	char	buffer[BUFFER_SIZE];
	int		is_open;
}	t_reader;

char		*get_next_line(int fd);
t_reader	current_file(int fd, t_reader (*files)[24]);
void		ft_putstr_fd(char *s, int fd);
void		update_reader(t_reader current, int fd, t_reader (*files)[24]);
int			search_end_line(t_reader *current, int size_buff);

#endif
