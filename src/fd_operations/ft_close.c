/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 00:42:30 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/18 22:46:19 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_close(int *fd)
{
	int	check;

	if (*fd < 2)
		return (1);
	check = close(*fd);
	*fd = -1;
	return (check);
}
