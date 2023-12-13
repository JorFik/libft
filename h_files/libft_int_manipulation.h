/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_int_manipulation.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:45:02 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 20:59:55 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_INT_MANIPULATION_H
# define LIBFT_INT_MANIPULATION_H

// **----------------------------- FUNCTIONS ----------------------------- **//

//_DESCRIPTION
//*		CONVERTS INT TO STRING
//_RETURNS
//?		ADDRESS		IF SUCCESSFUL
//?		NULL		IF MALLOC FAILS
//_WARNINGS
//!		THE MEMORY IS ALLOCATED, REMEMBER TO FREE IT
char			*ft_itoa(int n);

//_--------------------------------------------------------------------------_//

#endif