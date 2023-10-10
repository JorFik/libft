/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:47:39 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/09 23:52:18 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void			ft_bzero(void *address, unsigned long size);
void			*ft_memset(void *address, int filler, unsigned long size);
void			*ft_memmove(void *dst, const void *src, unsigned long len);
void			*ft_memcpy(void *dest, const void *src, unsigned long size);
void			*memchr(void *s, int c, unsigned long n);
char			*ft_strchr(char *src, int c);
char			*ft_strrchr(char *src, int c);
char			*ft_strnstr(const char *haystack,
					const char *needle, unsigned long len);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
int				ft_toupper(int c);
int				ft_isprint(int car);
int				ft_isdigit(int car);
int				ft_isascii(int car);
int				ft_isalpha(int car);
int				ft_isalnum(int car);
int				ft_tolower(int c);
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);
unsigned long	ft_strlen(const char *str);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dst_size);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dst_size);
#endif