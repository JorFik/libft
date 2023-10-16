/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:47:39 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/16 16:15:44 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void			ft_bzero(void *address, unsigned long size);
void			*ft_memset(void *address, int filler, unsigned long size);
void			*ft_memmove(void *dst, const void *src, unsigned long len);
void			*ft_memcpy(void *dest, const void *src, unsigned long size);
void			*ft_memchr(void *s, int c, unsigned long n);
void			*ft_calloc(unsigned long count, unsigned long size);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_itoa(int n);
char			*ft_strchr(char *src, int c);
char			*ft_strrchr(char *src, int c);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strnstr(const char *haystack, const char *needle,
					unsigned long len);
char			*ft_substr(char const *s, unsigned int start,
					unsigned long len);
char			**ft_split(char *s, char c);
int				ft_atoi(const char *str);
int				ft_toupper(int c);
int				ft_isprint(int car);
int				ft_isdigit(int car);
int				ft_isascii(int car);
int				ft_isalpha(int car);
int				ft_isalnum(int car);
int				ft_tolower(int c);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);
unsigned long	ft_strlen(const char *str);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dst_size);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dst_size);
#endif