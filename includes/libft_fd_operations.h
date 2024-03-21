/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_fd_operations.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:13:48 by JFikents          #+#    #+#             */
/*   Updated: 2024/03/21 14:16:03 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FD_OPERATIONS_H
# define LIBFT_FD_OPERATIONS_H

// **----------------------------- LIBRARIES ---------------------------- ** //

# include <stdlib.h>

//_--------------------------------------------------------------------------_//

// ** ---------------------------- FUNCTIONS ---------------------------- ** //

/**
	@note//_DESCRIPTION
	@brief #### Closes file descriptor
	@brief Checks if `*fd` is valid and other than `stderr`, `stdin` or `stdout`
		, if so `close()` it and set `*fd` to `-1` so it can't be closed again.
	@note//_PARAMETERS
	@param *fd Pointer to the file descriptor to close
	@note//_RETURNS
	@return `0` if `*fd` is valid and `close()` succeeds
	@return `-1` if `close()` fails
	@return `1` if `*fd` is negative or `0`
	@note//_NOTES
	@note This function is safer to use than `close()` because it checks if the
		file descriptor is valid and other than the standar file descriptors,
		before closing it, therefor preventing `Undefined beheavior`.
	@note//_SEE_ALSO
	@see `close()`
 */
int		ft_close(int *fd);

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

/**
	@note//_DESCRIPTION
	@brief #### Writes a `str` to `fd`.
	@brief Writes the string `str` to the specified file descriptor in `fd`.
	@note//_PARAMETERS
	@param str The string to be written.
	@param fd The file descriptor to write to.
 */
void	ft_putstr_fd(char *str, int fd);

//_--------------------------------------------------------------------------_//

#endif /* libft_fd_operations.h */