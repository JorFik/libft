/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_type_checks.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:24:43 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/14 22:05:42 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPE_CHECKS_H
# define LIBFT_TYPE_CHECKS_H

// **----------------------------- FUNCTIONS ----------------------------- **//

/**
	@note//_DESCRIPTION
	@brief #### Checks for alphabetic character.
	@brief Checks if the given character is a letter in the `ASCII` table.
	@note//_PARAMETERS
	@param chr The character to check.
	@note//_RETURN VALUES
	@return `1` if the character is an uppercase, `2` if the character is
		lowercase, `0` if the character is not a letter.
 */
int	ft_isalpha(int chr);

/**
	@note//_DESCRIPTION
	@brief #### Checks for a digit.
	@brief Checks if the given character is a digit in the `ASCII` table.
	@note//_PARAMETERS
	@param chr The character to check.
	@note//_RETURN VALUES
	@return `1` if the character is a digit, `0` if the character is not a digit.
 */
int	ft_isdigit(int chr);

/**
	@note//_DESCRIPTION
	@brief #### Checks for an alphanumeric character.
	@brief Checks if the given character is a letter or a digit in the `ASCII`
		table.
	@note//_PARAMETERS
	@param chr The character to check.
	@note//_RETURN VALUES
	@return `1` if is uppercase, `2` if is lowercase, `3` if is a digit, `0` if
		is not a letter or digit.
 */
int	ft_isalnum(int chr);

/**
	@note//_DESCRIPTION
	@brief #### Checks for an ASCII character.
	@brief Checks if the given character is in the `ASCII` table.
	@note//_PARAMETERS
	@param chr The character to check.
	@note//_RETURN VALUES
	@return `1` if the character is in the `ASCII` table, `0` if the character
		is not in the `ASCII` table.
 */
int	ft_isascii(int chr);

/**
	@note//_DESCRIPTION
	@brief #### Checks for a printable character.
	@brief Checks if the given character is a printable character in the `ASCII`
		table.
	@note//_PARAMETERS
	@param chr The character to check.
	@note//_RETURN VALUES
	@return `1` if the character is a printable character, `0` if the character
		is not a printable character.
 */
int	ft_isprint(int chr);

//_--------------------------------------------------------------------------_//

#endif