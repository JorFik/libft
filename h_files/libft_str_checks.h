/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_str_checks.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:31:51 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/15 15:01:59 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STR_CHECKS_H
# define LIBFT_STR_CHECKS_H

// **----------------------------- FUNCTIONS ----------------------------- **//

/**
	@note//_DESCRIPTION
	@brief #### Scan for `c` in `src`.
	@brief Locates the first occurence of value `c` in the string `src`.
	@note//_PARAMETERS
	@param src The string to scan.
	@param c The value to scan for.
	@note//_RETURNS
	@return The address of the first occurence of `c` in `src`, NULL if `c` is
		not part of `src`.
	@note//_WARNINGS
	@warning Undefined behavior if `src` is NULL.
 */
char	*ft_strchr(char *src, int c);

/**
	@note//_DESCRIPTION
	@brief #### Scan from the end for `c` in `src`.
	@brief Locates the last occurence of value `c` in the string `src`.
	@note//_PARAMETERS
	@param src The string to scan.
	@param c The value to scan for.
	@note//_RETURNS
	@return The address of the last occurence of `c` in `src`, NULL if `c` is
		not part of `src`.
	@note//_WARNINGS
	@warning Undefined behavior if `src` is NULL.
 */
char	*ft_strrchr(char *src, int c);

/**
	@note//_DESCRIPTION
	@brief #### Compare two strings.
	@brief Compares the two strings `s1` and `s2`. It returns an integer less
		than, equal to, or greater than zero if `s1` is found, respectively, to
		be less than, to match, or be greater than `s2`.
	@note//_PARAMETERS
	@param s1 The first string to be compared.
	@param s2 The second string to be compared.
	@param n The maximum number of bytes to compare.
	@note//_RETURNS
	@return An integer less than, equal to, or greater than zero if `s1` is
		found, respectively, to be less than, to match, or be greater than `s2`.
	@note//_NOTES
	@note Can handle `NULL` addresses.
 */
int		ft_strncmp(const char *s1, const char *s2, unsigned long n);

/**
	@note//_DESCRIPTION
	@brief #### Scan for `needle` in `haystack`.
	@brief Locates the first occurence of the string `needle` in the string
		`haystack` limited to `len` bytes.
	@note//_PARAMETERS
	@param haystack The string to scan.
	@param needle The string to scan for.
	@param len The maximum number of bytes to scan.
	@note//_RETURNS
	@return The address of the first occurence of `needle` in `haystack`, NULL
		if `needle` is not part of `haystack` or if `len` is 0.
	@note//_WARNINGS
	@warning Undefined behavior if `haystack` is NULL.
	@warning Make sure `haystack` can be read in the memory size given for
		`haystack`.
	@warning Make sure `needle` can be read and is `NULL` terminated.
 */
char	*ft_strnstr(const char *haystack, const char *needle,
			unsigned long len);

//_--------------------------------------------------------------------------_//

#endif