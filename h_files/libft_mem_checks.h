/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem_checks.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:33:03 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 15:35:58 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_CHECKS_H
# define LIBFT_MEM_CHECKS_H

// **----------------------------- FUNCTIONS ----------------------------- **//

//_RETURNS
//?		ADDRESS OF FIRST OCCURENCE OF CHAR IN SRC
//?		NULL IF CHAR IS NOT IN SRC OR MEMORY_SIZE IS 0
//_WARNINGS
//!	UNDEFINED BEHEAVIOR IF SRC IS NULL
//!	YOU NEED TO MAKE SURE WE CAN READ IN THE MEMORY SIZE GIVEN FROM SRC
void			*ft_memchr(void *src, int chr, unsigned long memory_size);

//_RETURNS
//?		0	IF STRINGS ARE EQUAL OR MEMORY_SIZE IS 0
//?		>0	IF S1 > S2
//?		<0	IF S1 < S2
//_WARNINGS
//!		UNDEFINED BEHEAVIOR IF ANY SRC IS NULL
//!		YOU NEED TO MAKE SURE WE CAN READ IN THE MEMORY SIZE GIVEN FOR BOTH SRCS
int				ft_memcmp(const void *s1, const void *s2, unsigned long m_size);

//_--------------------------------------------------------------------------_//

#endif