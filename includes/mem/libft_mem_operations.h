/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem_operations.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:30:28 by JFikents          #+#    #+#             */
/*   Updated: 2024/03/19 17:45:56 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_OPERATIONS_H
# define LIBFT_MEM_OPERATIONS_H

// **----------------------------- FUNCTIONS ----------------------------- **//

/**
	@note//_DESCRIPTION
	@brief #### Sets `size` bytes of `address` to 0.
	@brief Sets the memory area delimited by `address` and `address + size`
	to 0.
	@note//_PARAMETERS
	@param address The address of the memory to be set.
	@param size The number of bytes to be set to 0.
	@note//_WARNINGS
	@warning Undefiend beheavior if `address` is NULL.
	@warning Make sure address is accessible for writing.
 */
void	ft_bzero(void *address, unsigned long size);

/**
	@note//_DESCRIPTION
	@brief #### Copies `src` to `dest`.
	@brief Copies `size` bytes from `src` to `dest`.
	@note//_PARAMETERS
	@param dest The destination address.
	@param src The source address.
	@param size The number of bytes to be copied.
	@note//_RETURN
	@return The address of the destination.
	@note//_WARNINGS
	@warning Undefined beheavior if `dest` xor `src` is NULL.
	@warning Make sure `dest` is accessible for writing.
	@warning Make sure `src` is accessible for reading.
 */
void	*ft_memcpy(void *dest, const void *src, unsigned long size);

/**
	@note//_DESCRIPTION
	@brief #### Copies `src` to `dest` taking care of overlapping memory areas.
	@brief Copies `size` bytes from `src` to `dest`, depending on the relative
		position of `dest` in relation to `src` the function will copy the bytes
		in a different order to avoid overwriting the source before it is copied
		to the destination.
	@note//_PARAMETERS
	@param dest The destination address.
	@param src The source address.
	@param size The number of bytes to be copied.
	@note//_RETURN
	@return The address of the destination.
	@note//_WARNINGS
	@warning Undefined beheavior if `dest` or `src` is NULL.
	@warning Make sure `dest` is accessible for writing.
	@warning Make sure `src` is accessible for reading.
 */
void	*ft_memmove(void *dst, const void *src, unsigned long len);

/**
	@note//_DESCRIPTION
	@brief #### Sets `address` to `filler` for `size` bytes.
	@brief Sets the memory area delimited by `address` and `address + size`
	to value `filler`.
	@note//_PARAMETERS
	@param address The address of the memory to be set.
	@param filler The value to be set.
	@param size The number of bytes to be set to the value.
	@note//_RETURN
	@return The address of the memory area.
	@note//_WARNINGS
	@warning Does not check if `address` is NULL.
	@warning Make sure address is accessible for writing.
 */
void	*ft_memset(void *address, int filler, unsigned long size);

//_--------------------------------------------------------------------------_//

#endif