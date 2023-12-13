/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_char_manipulation.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:34:46 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 23:46:16 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHAR_MANIPULATION_H
# define LIBFT_CHAR_MANIPULATION_H

// **----------------------------- FUNCTIONS ----------------------------- **//

//_RETURNS
//?		UPPERCASE		IF LOWERCASE
//?		THE SAME CHAR	IF NOT LOWERCASE
//_NOTES
//*	EVERYTHING IS INT TYPE
int				ft_toupper(int c);

//_RETURNS
//?		LOWERCASE		IF UPPERCASE
//?		THE SAME CHAR	IF NOT UPPERCASE
//_NOTES
//*	EVERYTHING IS INT TYPE
int				ft_tolower(int c);

//_--------------------------------------------------------------------------_//

#endif