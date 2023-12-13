/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem_manipulation.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:30:28 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 15:31:24 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_MANIPULATION_H
# define LIBFT_MEM_MANIPULATION_H

// **----------------------------- FUNCTIONS ----------------------------- **//

//_RETURNS
//?		GIVEN ADDRESS
//_WARNINGS
//!	DOES NOT CHECK IF ADDRESS IS NULL
//!	YOU NEED TO MAKE SURE WE CAN WRITE IN THE MEMORY SIZE GIVEN
void			*ft_memset(void *address, int filler, unsigned long size);

//_RETURNS
//?		ADDRESS OF DESTINATION
//?		NULL IF DESTINATION AND SRC = NULL
//_WARNINGS
//!	SEGFAULT IF DEST IS NULL XOR SRC IS NULL
//!	YOU NEED TO MAKE SURE WE CAN WRITE IN THE MEMORY SIZE GIVEN FROM DEST
//!	YOU NEED TO MAKE SURE WE CAN READ IN THE MEMORY SIZE GIVEN FROM SRC
void			*ft_memcpy(void *dest, const void *src, unsigned long size);

//_RETURNS
//?		ADDRESS OF DESTINATION
//_WARNINGS
//!	DOES NOT CHECK IF DESTINATION NOR SRC
//!	YOU NEED TO MAKE SURE WE CAN WRITE IN THE MEMORY SIZE GIVEN FROM DEST
//!	YOU NEED TO MAKE SURE WE CAN READ IN THE MEMORY SIZE GIVEN FROM SRC
void			*ft_memmove(void *dst, const void *src, unsigned long len);

//_WARNINGS
//!	DOES NOT CHECK IF ADDRESS IS NULL
//!	YOU NEED TO MAKE SURE WE CAN WRITE IN THE MEMORY SIZE GIVEN
//! THERE IS NO RETURN VALUE
void			ft_bzero(void *address, unsigned long size);

//_--------------------------------------------------------------------------_//

#endif