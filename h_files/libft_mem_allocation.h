/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem_allocation.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:37:32 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 23:24:17 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_ALLOCATION_H
# define LIBFT_MEM_ALLOCATION_H

// **----------------------------- LIBRARIES ----------------------------- **//

# include <stdlib.h>

//_--------------------------------------------------------------------------_//

// **----------------------------- FUNCTIONS ----------------------------- **//

//_RETURNS
//?		ADDRESS OF NEW MEMORY ALLOCATED FILLED WITH 0
//?		NULL IF MALLOC FAILS
//_NOTES
//*		IF MEMORY ALLOCATION IS FOR CHAR TYPE, REMEMBER TO +1 FOR NULL BYTE
//*		SAME SYNTAX AS MALLOC BUT INSTEAD OF (COUNT * SIZE) IS (COUNT, SIZE)
//_WARNINGS
//!		THE MEMORY IS ALLOCATED DON'T FORGET TO FREE IT
void			*ft_calloc(unsigned long count, unsigned long size);

//_DESCRIPTION
//? 	CHECKS IF PTR IS NULL AND FREES IT, THEN SETS PTR TO NULL
//_NOTES
//*		SAFER TO USE THAN FREE
void			ft_free_n_null(void **ptr);

//_--------------------------------------------------------------------------_//

#endif