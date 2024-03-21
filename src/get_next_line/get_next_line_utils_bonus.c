/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:48:02 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/05 17:43:52 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

long	ft_back2zero(char **pos, char *last_read)
{
	int	i;

	i = 0;
	while (last_read && i <= BUFFER_SIZE)
		last_read[i++] = 0;
	if (pos && *pos)
	{
		free(*pos);
		*pos = NULL;
	}
	return (0);
}

char	*ft_handle_nl(char *pre_line, char *last_read, int check_read)
{
	char	*new_line;
	int		nl_i;
	int		i;

	nl_i = 1;
	i = 0;
	new_line = ft_strchr(pre_line, '\n');
	if (!new_line && check_read)
		return (NULL);
	while (check_read && new_line[nl_i])
	{
		last_read[i ++] = new_line[nl_i];
		new_line[nl_i ++] = 0;
	}
	i = 0;
	nl_i = 0;
	if (pre_line[i])
		new_line = ft_calloc(ft_strlen(pre_line) + 1, sizeof(char));
	if (!new_line)
		return (NULL);
	while (pre_line[i])
		new_line[nl_i ++] = pre_line[i ++];
	return (new_line);
}
