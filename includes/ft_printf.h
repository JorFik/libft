/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <Jfikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:57:54 by JFikents          #+#    #+#             */
/*   Updated: 2024/06/29 15:59:44 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

/**
	@note//_DESCRIPTION
	@brief Prints a formatted string to the standard output.
	@note//_PARAMETERS
	@param formato The format string including flags with the format `%[flag]`
	@param ... Here you will pass the arguments to be printed interpreted as
	described in the format string.
	@note//_RETURNS
	@return The number of characters printed or -1 if an error occurs.
	@note//_NOTES
	@note The following flags are supported:
	@note	`%c`	- Character
	@note	`%s`	- String
	@note	`%p`	- Pointer
	@note	`%d`	- Signed decimal integer
	@note	`%i`	- Signed decimal integer
	@note	`%u`	- Unsigned decimal integer
	@note	`%x`	- Unsigned hexadecimal integer (lowercase)
	@note	`%X`	- Unsigned hexadecimal integer (uppercase)
	@note	`%%`	- Percent sign
 */
int	ft_printf(const char *formato, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_cases(const char *formato, va_list input);
int	ft_is_bonus_flag(const char *formato);
int	ft_bonus_flags(const char *formato, va_list input);
int	ft_hex_cases(const char *formato, va_list input);

/**
	@note//_DESCRIPTION
	@brief Prints a formatted string to the specified file descriptor.
	@note//_PARAMETERS
	@param fd The file descriptor to which the string will be printed.
	@param formato The format string including flags with the format `%[flag]`
	@param ... Here you will pass the arguments to be printed interpreted as
	described in the format string.
	@note//_RETURNS
	@return The number of characters printed or -1 if an error occurs.
	@note//_NOTES
	@note The following flags are supported:
	@note	`%c`	- Character
	@note	`%s`	- String
	@note	`%p`	- Pointer
	@note	`%d`	- Signed decimal integer
	@note	`%i`	- Signed decimal integer
	@note	`%u`	- Unsigned decimal integer
	@note	`%x`	- Unsigned hexadecimal integer (lowercase)
	@note	`%X`	- Unsigned hexadecimal integer (uppercase)
	@note	`%%`	- Percent sign
 */
int	ft_printf_fd(int fd, const char *formato, ...);
#endif
