/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_mem_allocation.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:37:32 by JFikents          #+#    #+#             */
/*   Updated: 2024/02/01 15:33:42 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEM_ALLOCATION_H
# define LIBFT_MEM_ALLOCATION_H

// **----------------------------- LIBRARIES ----------------------------- **//

# include <stdlib.h>

//_--------------------------------------------------------------------------_//

// **----------------------------- FUNCTIONS ----------------------------- **//

/**
	@note//_DESCRIPTION
	@brief #### Allocates memory and fills it with 0
	@brief Allocates memory and fills every byte with 0
	@note//_PARAMETERS
	@param count Number of elements to allocate memory for
	@param size Size of each element in bytes. See `sizeof()` for more info
	@note//_RETURNS
	@return A pointer to the allocated memory or `NULL` if malloc fails
	@note//_NOTES
	@note If memory allocation is for `char` type, remember to +1 for null byte
	@note Same applies to `char *` type, remember to +1 for null elemnt at the
		end
	@note The memory is allocated don't forget to `free()` it
	@note//_SEE_ALSO
	@see `malloc()`
	@see `calloc()`
	@see `free()`
 */
void	*ft_calloc(unsigned long count, unsigned long size);

/**
	@note//_DESCRIPTION
	@brief #### Frees memory and sets pointer to `NULL`
	@brief Checks if `*ptr` is not `NULL`, if so frees memory and sets pointer
		to `NULL` to prevent double `free()`
	@param ptr Address of pointer to free
	@note//_SEE_ALSO
	@see `free()`
	@note//_NOTES
	@note This function is safer to use than `free()` because it sets the
		pointer to `NULL` after freeing it, allowing to check if the memory was
		previously freed, therefor preventing a double `free()`.
 */
void	ft_free_n_null(void **ptr);

/**
	@note//_DESCRIPTION
	@brief #### Frees a 2D array.
	@brief Frees the given `array` of size `size`, and sets it to `NULL`.
	@note//_PARAMETERS
	@param array The array to free.
	@param size The size of the array.
	@note//_NOTES
	@note If `size` is -1 then it frees the array until it finds a `NULL`.
	@note The `array` is a triple pointer, so it can be set to `NULL`.
	@note It uses `ft_free_n_null` to free the array.
		See `libft/h_files/libft_mem_allocation.h` for more information.
	@see ft_free_n_null
 */
void	ft_free_2d_array(void ***array, int size);

/**
	@note//_DESCRIPTION
	@brief #### Closes file descriptor
	@brief Checks if `*fd` is valid and other than `stderr`, `stdin` or `stdout`
		, if so `close()` it and set `*fd` to `-1` so it can't be closed again.
	@note//_PARAMETERS
	@param *fd Pointer to the file descriptor to close
	@note//_RETURNS
	@return `0` if `*fd` is valid and `close()` succeeds
	@return `-1` if `close()` fails
	@return `1` if `*fd` is negative or `0`
	@note//_NOTES
	@note This function is safer to use than `close()` because it checks if the
		file descriptor is valid and other than the standar file descriptors,
		before closing it, therefor preventing `Undefined beheavior`.
	@note//_SEE_ALSO
	@see `close()`
 */
int		ft_close(int *fd);

//_--------------------------------------------------------------------------_//

#endif