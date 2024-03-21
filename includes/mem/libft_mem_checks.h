/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem_checks.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:33:03 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/14 21:31:54 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_CHECKS_H
# define LIBFT_MEM_CHECKS_H

// **----------------------------- FUNCTIONS ----------------------------- **//

/**
	@note//_DESCRIPTION
	@brief ### Checks for `needle` in `hay_bale`.
	@brief Checks every byte for the first occurrence of value `needle`
		in memory `hay_bale` for `memory_size` bytes.
	@note//_PARAMETERS
	@param hay_bale The memory area to be scanned.
	@param needle Character to be located.
	@param memory_size Number of bytes to be scanned.
	@note//_RETURNS
	@return Returns a pointer to the matching byte or NULL if the character does
		not occur in the given memory area.
	@note//_WARNINGS
	@warning Undefined behavior if `hay_bale` is NULL.
	@warning Make sure `hay_bale` is readable in the memory size given.
 */
void	*ft_memchr(void *hay_bale, int needle, unsigned long memory_size);

/**
	@note//_DESCRIPTION
	@brief Compares `s1` and `s2` for `memory_size` bytes.
	@note//_PARAMETERS
	@param s1 The first memory area to be compared.
	@param s2 The second memory area to be compared.
	@param memory_size Number of bytes to be compared.
	@note//_RETURNS
	@return Returns an integer less than, equal to, or greater than zero if
		the first `memory_size` bytes of `s1` is found, respectively, to be
		less than, to match, or be greater than the first `memory_size` bytes
		of `s2`.
	@note//_WARNINGS
	@warning Undefined behavior if `s1` or `s2` is NULL.
	@warning Make sure `s1` and `s2` are readable in the memory size given.
 */
int		ft_memcmp(const void *s1, const void *s2, unsigned long m_size);

//_--------------------------------------------------------------------------_//

#endif