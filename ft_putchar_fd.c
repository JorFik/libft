/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:54:38 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/14 17:41:03 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
	@brief Outputs the character 'c' to the given file descriptor.
	@param c The character to output.
	@param fd The file descriptor on which to write the character.
	@return void.
 */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return ;
}
