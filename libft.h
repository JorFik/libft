/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:47:39 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/07 22:47:41 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

void	*ft_memset(void *address, int filler, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	ft_bzero(void *address, size_t size);
int		ft_strlen(char *str);
int		ft_isprint(unsigned char car);
int		ft_isdigit(unsigned char car);
int		ft_isascii(unsigned char car);
int		ft_isalpha(char car);
int		ft_isalnum(unsigned char car);