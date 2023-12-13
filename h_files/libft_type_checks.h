/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_type_checks.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:24:43 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 15:26:30 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TYPE_CHECKS_H
# define LIBFT_TYPE_CHECKS_H

// **----------------------------- FUNCTIONS ----------------------------- **//

//_RETURNS 
//?		1	FOR UPPERCASE
//?		2	FOR LOWERCASE
//?		0	IF NOT A LETTER
int				ft_isalpha(int chr);

//_RETURNS 
//?		1	FOR DIGIT
//?		0	IF NOT A DIGIT
int				ft_isdigit(int chr);

//_RETURNS 
//?		3	FOR DIGIT
//?		2	FOR LOWERCASE
//?		1	FOR UPPERCASE,
//?		0	IF NOT ALPHANUMERIC
int				ft_isalnum(int chr);

//_RETURNS
//?		1	FOR ASCII CHARACTER
//?		0	IF NOT ASCII
int				ft_isascii(int chr);

//_RETURNS
//?		1	FOR PRINTABLE CHARACTER
//?		0	IF NOT PRINTABLE
int				ft_isprint(int chr);

//_--------------------------------------------------------------------------_//

#endif