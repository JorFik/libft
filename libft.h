/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:47:39 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/08 20:19:57 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void			*ft_memset(void *address, int filler, unsigned long size);
void			*ft_memmove(void *dst, const void *src, unsigned long len);
void			*ft_memcpy(void *dest, const void *src, unsigned long size);
void			ft_bzero(void *address, unsigned long size);
int				ft_isprint(unsigned char car);
int				ft_isdigit(unsigned char car);
int				ft_isascii(unsigned char car);
int				ft_isalpha(char car);
int				ft_isalnum(unsigned char car);
unsigned long	ft_strlen(const char *str);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dst_size);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dst_size);
#endif