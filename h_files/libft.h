/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:47:39 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 23:16:26 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// **----------------------------- LIBRARIES ----------------------------- **//

//_STANDARD LIBRARIES (MALLOC, FREE, WRITE, READ, EXIT, ETC.)
# include <stdlib.h>

//_PRINTF
# include "ft_printf.h"

//_GET_NEXT_LINE
# include "get_next_line_bonus.h"

//_TYPE CHECKS
# include "libft_type_checks.h"

//_WRITE TO FILE DESCRIPTOR
# include "libft_write_fd.h"

//_STRING RELATED
# include "libft_str_manipulation.h"
# include "libft_str_checks.h"

//_CHARACTER RELATED
# include "libft_char_manipulation.h"

//_INT RELATED
# include "libft_int_manipulation.h"

//_MEMORY RELATED
# include "libft_mem_manipulation.h"
# include "libft_mem_checks.h"
# include "libft_mem_allocation.h"

//_LIST RELATED
# include "libft_lst_manipulation.h"
//_--------------------------------------------------------------------------_//

//_DESCRIPTION
//?		CHECKS IF FD IS VALID AND CLOSES IT
//_RETURNS
//?		0 IF SUCCESS
//?		-1 IF CLOSE FAILS
//?		1 IF FD IS NEGATIVE OR 0
//_NOTES
//*		SAFER THAN CLOSE()
int				ft_close(int fd);
//_--------------------------------------------------------------------------_//

#endif

// INT MANIPULATION
// STR MANIPULATION
