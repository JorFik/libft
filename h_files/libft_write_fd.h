/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_write_fd.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:13:48 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 23:17:20 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_WRITE_FD_H
# define LIBFT_WRITE_FD_H

// **----------------------------- LIBRARIES ----------------------------- **//

# include <stdlib.h>

//_--------------------------------------------------------------------------_//

// **----------------------------- FUNCTIONS ----------------------------- **//

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_WARNINGS
//!		
//_NOTES
//*		
void			ft_putchar_fd(char c, int fd);

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_WARNINGS
//!		
//_NOTES
//*		
void			ft_putstr_fd(char *s, int fd);

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_WARNINGS
//!		
//_NOTES
//*		
void			ft_putendl_fd(char *s, int fd);

//_DESCRIPTION
//?		
//_RETURNS
//?		
//_WARNINGS
//!		
//_NOTES
//*		
void			ft_putnbr_fd(int n, int fd);

//_--------------------------------------------------------------------------_//

#endif