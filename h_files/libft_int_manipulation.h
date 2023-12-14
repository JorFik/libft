/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_int_manipulation.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:45:02 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/14 20:14:14 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_INT_MANIPULATION_H
# define LIBFT_INT_MANIPULATION_H

// **----------------------------- FUNCTIONS ----------------------------- **//

/**
	@note//_DESCRIPTION
	@brief #### TRANSFORMS AN INT TO A STRING
	@brief Transforms an int value to its equivalent written version in 
		characters to a new allocated string.
	@note//_PARAMETERS
	@param n The int value to be transformed.
	@note//_RETURNS
	@return The address of the new allocated string or `NULL` if the allocation
		fails.
	@note//_NOTES
	@note The memory is allocated, remember to `free()` it.
 */
char			*ft_itoa(int n);

//_--------------------------------------------------------------------------_//

#endif