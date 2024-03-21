/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str_operations.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:19:56 by JFikents          #+#    #+#             */
/*   Updated: 2024/03/19 18:01:34 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_OPERATIONS_H
# define LIBFT_STR_OPERATIONS_H

// **----------------------------- FUNCTIONS ----------------------------- ** //

/**
	@note//_DESCRIPTION
	@brief Converts a string to an integer.
	This function takes a string as input and converts it to an integer.
	It skips any leading white spaces and stops converting when it encounters
	a non-digit character. The converted integer is returned.
	@note//_PARAMETERS
	@param str The string to be converted.
	@note//_RETURNS
	@return The converted integer value.
	@note//_NOTES
	@note The function handles only one sign, either + or -.
	@note The function handles multiple blank characters (ASCII 32, 9-13).
	@note//_WARNINGS
	@warning Undefined behavior if str is NULL.
 */
int				ft_atoi(const char *str);

/**
	@note//_DESCRIPTION
	@brief #### TRANSFORMS AN INT TO A STRING
	@brief Transforms an int value to its equivalent written version in 
		characters to a new allocated string.
	@note//_PARAMETERS
	@param n The int value to be transformed.
	@note//_RETURNS
	@return The address of the new allocated string or `NULL` if the allocation
		fails.
	@note//_NOTES
	@note The memory is allocated, remember to `free()` it.
 */
char			*ft_itoa(int n);

/**
	@note//_DESCRIPTION
	@brief ### Split a string into an array of strings using a delimiter.
	@note//_PARAMETERS
	@param src The string to be split.
	@param c The delimiter character.
	@note//_RETURNS
	@return The Pointr to the array of strings, or NULL if the allocation fails.
	@note//_NOTES
	@note The memory is allocated, don't forget to free it.
	@note It does not free src.
	@note//_WARNINGS
	@warning Is an array of strings, don't forget to free each string and the
			array itself.
 */
char			**ft_split(char *src, char c);

/**
	@note//_DESCRIPTION
	@brief Duplicate a string.
		It duplicates the string pointed to by `src`, creating a new
		string in memory that contains a copy of the original string.
	@note//_PARAMETERS
	@param src The string to be duplicated.
	@note//_RETURNS
	@return A pointer to the newly allocated string,
			or NULL if the allocation fails.
	@note//_WARNINGS
	@warning Undefined behavior if src is NULL.
	@note//_NOTES
	@note The memory is allocated, don't forget to free it.
 */
char			*ft_strdup(const char *src);

/**
	@note//_DESCRIPTION
	@brief Iterates the string src and applies the function f to each character.
	@note//_PARAMETERS
	@param src The string to iterate.
	@param f The function to apply to each character.
	@note//_RETURNS
	@return void.
	@note//_NOTES
	@note The first parameter of the `f()` is the `index` of the character
		and the second is the `string itself`.
 */
void			ft_striteri(char *src, void (*f)(unsigned int, char *));

/**
	@note//_DESCRIPTION
	@brief CREATES A STRING WITH THE RESULT OF THE CONCATENATION OF Str_1 to
		Str_2
	@note//_PARAMETERS
	@param str_1
	@param str_2
	@note//_RETURNS
	@return Address of the new string, or NULL if the allocation fails.
	@note//_NOTES
	@note The memory is allocated, don't forget to free it.
	@note Does not free str_1 nor str_2.
 */
char			*ft_strjoin(char const *str_1, char const *str_2);

/**
	@note//_DESCRIPTION
	@brief Concatenates the string src to the end of the string dst.
			It will append at most dst_size - strlen(dst) - 1 characters from 
			src, and null-terminate the result.
	@note//_PARAMETERS
	@param dst The destination string where the concatenated string will be
				stored.
	@param src The source string to be appended.
	@param dst_size The size of the destination buffer.
	@note//_RETURNS
	@return The total length of the string that would have been created if
			dst_size was sufficiently large, excluding '\0'.
	@note//_WARNINGS
	@warning Returns immediately if dst is already full.
	@warning Make sure the destination can be written on.
 */
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dst_size);

/**
	@note//_DESCRIPTION
	@brief Copies a string from source to destination, up to a specified size.
	@note//_PARAMETERS
	@param dst The destination string.
	@param src The source string.
	@param dst_size The size of the destination buffer.
	@note//_RETURNS
	@return The total length of the source string.
	@return 0 if the source string is NULL.
	@note//_NOTES
	@note Sets the last byte of the destination to 0.
	@note//_WARNINGS
	@warning Returns immediately if dst_size is 0 or negative.
	@warning Make sure the destination can be written on.
 */
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dst_size);

/**
	@note//_DESCRIPTION
	@brief Itereates the string src and applies the function f to each character
		and stores the result in a new string.
	@note//_PARAMETERS
	@param src The string to iterate. 
	@param f The function to apply to each character.
	@note//_RETURNS
	@return The new string, or NULL if the allocation fails.
	@note//_NOTES
	@note The first parameter of the `f()` is the `index` of the character
		and the second is the `character itself`.
	@note The memory is allocated, don't forget to free it.
 */
char			*ft_strmapi(char const *src, char (*f)(unsigned int, char));

/**
	@note//_DESCRIPTION
	@brief Creates a new string from the content of src after erasing the
		characters specified in set from the beginning and end.
	@note//_PARAMETERS
	@param src The string to be trimmed.
	@param set The set of characters to trim.
	@note//_RETURNS
	@return Address of the new string, or NULL if the allocation fails.
	@note//_NOTES
	@note If src is NULL or empty, returns an empty string.
	@note The memory is allocated, don't forget to free it.
	@note It does not free src.
 */
char			*ft_strtrim(char const *src, char const *set);

/**
	@note//_DESCRIPTION
	@brief Extracts a substring from the source string.
		This function takes a source string and extracts a substring starting
		from the specified index and with the specified length. The extracted
		substring is returned as a new allocated string.
	@note//_PARAMETERS
	@param src The source string from which to extract the substring.
	@param start The starting index of the substring.
	@param len The length of the substring to extract.
	@note//_RETURNS
	@return The extracted substring as a new allocated string, or 
		NULL if an error occurred.
	@note//_WARNINGS
	@warning Make sure the source string can be read from.
	@note//_NOTES
	@note If start is beyond the end of the string, an empty string is returned.
	@note The memory is allocated, don't forget to free it.
 */
char			*ft_substr(char const *src, unsigned int start,
					unsigned long len);

//_--------------------------------------------------------------------------_//

#endif