/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str_checks.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:31:51 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 15:32:38 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_CHECKS_H
# define LIBFT_STR_CHECKS_H

// **----------------------------- FUNCTIONS ----------------------------- **//

//_RETURNS
//?		ADDRESS OF FIRST OCCURENCE OF CHAR IN SRC
//?		NULL IF CHAR IS NOT IN SRC
//_WARNINGS
//!	UNDEFINED BEHEAVIOR IF SRC IS NULL
char			*ft_strchr(char *src, int c);

//_RETURNS
//?		ADDRESS OF LAST OCCURENCE OF CHAR IN SRC
//?		NULL IF CHAR IS NOT IN SRC
//_WARNINGS
//!	UNDEFINED BEHEAVIOR IF SRC IS NULL
char			*ft_strrchr(char *src, int c);

//_RETURNS
//?		0	IF STRINGS ARE EQUAL
//?		>0	IF S1 > S2
//?		<0	IF S1 < S2
//_NOTES
//*	CAN HANDLE NULL STRINGS
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);

//_RETURNS
//?		ADDRESS OF FIRST OCCURENCE OF NEEDLE IN HAYSTACK
//?		ADDRESS OF HAYSTACK IF NEEDLE IS EMPTY
//?		NULL IF NEEDLE IS NOT IN HAYSTACK OR LEN IS 0
//_WARNINGS
//!	UNDEFINED BEHEAVIOR IF HAYSTACK IS NULL
//!	YOU NEED TO MAKE SURE WE CAN READ IN THE MEMORY SIZE GIVEN FOR HAYSTACK
char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned long len);

//_--------------------------------------------------------------------------_//

#endif