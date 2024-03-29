/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_char_operations.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:34:46 by JFikents          #+#    #+#             */
/*   Updated: 2024/03/19 11:59:41 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHAR_OPERATIONS_H
# define LIBFT_CHAR_OPERATIONS_H

// **----------------------------- FUNCTIONS ----------------------------- **//

/**
	@note//_DESCRIPTION
	@brief #### TRANSFORMS A CHAR TO LOWERCASE
	@note//_PARAMETERS
	@param c Int value of the char to be transformed.
	@note//_RETURNS
	@return Returns the int value from the lowercase version of the char.
	@note//_NOTES
	@note It will return the same int value if the char is not an
		uppercase letter.
 */
int	ft_tolower(int c);

/**
	@note//_DESCRIPTION
	@brief #### TRANSFORMS A CHAR TO UPPERCASE
	@note//_PARAMETERS
	@param c Int value of the char to be transformed.
	@note//_RETURNS
	@return Returns the int value from the uppercase version of the char.
	@note//_NOTES
	@note It will return the same int value if the char is not a
		lowercase letter.
 */
int	ft_toupper(int c);

//_--------------------------------------------------------------------------_//

#endif