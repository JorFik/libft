/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_write_fd.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:13:48 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/14 22:19:14 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_WRITE_FD_H
# define LIBFT_WRITE_FD_H

// **----------------------------- LIBRARIES ---------------------------- ** //

# include <stdlib.h>

//_--------------------------------------------------------------------------_//

// ** ---------------------------- FUNCTIONS ---------------------------- ** //

/**
	@note//_DESCRIPTION
	@brief #### Writes `c` to `fd`.
	@brief Outputs the character `c` to the given file descriptor in `fd`.
	@note//_PARAMETERS
	@param c character to output.
	@param fd File descriptor on which to write the character.
*/
void	ft_putchar_fd(char c, int fd);

/**
	@note//_DESCRIPTION
	@brief #### Writes a `str` to `fd`.
	@brief Writes the string `str` to the specified file descriptor in `fd`.
	@note//_PARAMETERS
	@param str The string to be written.
	@param fd The file descriptor to write to.
 */
void	ft_putstr_fd(char *str, int fd);

/**
	@note//_DESCRIPTION
	@brief #### Writes a `str` to `fd` followed by a newline.
	@brief Writes the string `str` to the specified file descriptor in `fd`,
		followed by a newline.
	@note//_PARAMETERS
	@param str The string to be written.
	@param fd The file descriptor to write to.
 */
void	ft_putendl_fd(char *s, int fd);

/**
	@note//_DESCRIPTION
	@brief #### Writes an `n` to `fd`.
	@brief Outputs the integer `n` to the given file descriptor in `fd`.
	@note//_PARAMETERS
	@param n The integer to output.
	@param fd The file descriptor on which to write the integer.
 */
void	ft_putnbr_fd(int n, int fd);

//_--------------------------------------------------------------------------_//

#endif