/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:34:54 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/14 20:02:00 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef MAX_FD
#  define MAX_FD 10240
# endif

typedef struct s_lines
{
	char	*line;
	char	tmp[BUFFER_SIZE + 1];
	char	pre[BUFFER_SIZE + 1];
}	t_lines;

/**
	@note//_DESCRIPTION
	@brief #### Get the next line from a file descriptor.
	@brief The function will return a line ending with a newline character, if
		there is one available. If there is no newline character available,
		it will call `read()` to get more data from the file descriptor until
		a newline character is available, or it reaches the end of the file.
	@note//_PARAMETERS
	@param fd The file descriptor from which to read.
	@note//_RETURNS
	@return The line that was read from the file descriptor, or `NULL` if an
		error occurred.
	@note//_NOTES
	@note 1- The function can handle multiple file descriptors at the same time.
	@note 2- `BUFFER_SIZE` can be changed at compile time. `Default is 10`
	@note 3- `MAX_FD` can be changed at compile time. `Default is 10240`
 */
char			*get_next_line(int fd);
void			ft_init_lines(char *pre, char *tmp);
void			*ft_calloc(unsigned long count, unsigned long size);
char			*ft_strchr(char *src, int c);
unsigned long	ft_strlen(const char *str);
char			*ft_handle_nl(char *line, char *last_line, int check_read);
long			ft_back2zero(char **pos, char *last_read);

#endif