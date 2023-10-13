/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:37:17 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/14 01:00:09 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_charcount(char const *s, char c)
{
	unsigned long	appearences;
	char			*new_p;

	appearences = 0;
	if (*s)
	{
		new_p = ft_strchr((char *)s, c);
		while (new_p)
		{
			appearences ++;
			while (*new_p == c && *new_p)
				new_p ++;
			if (*new_p == '\0')
				return (appearences);
			new_p = ft_strchr(new_p, c);
		}
	}
	return (appearences ++);
}

// num_str + 1 porque si 5 char then 6 str
char	**ft_split(char const *s, char c)
{
	unsigned long	num_str;
	unsigned long	i;
	unsigned long	size;
	char			**p_d_p;
	char			*u_p;

	i = 0;
	u_p = (char *) s;
	num_str = ft_charcount(u_p, c) + 1;
	p_d_p = ft_calloc(num_str + 1, sizeof(char *));
	if (!p_d_p)
		return ((void *)0);
	while (num_str && *u_p)
	{
		size = 0;
		while (*u_p == c && *u_p)
			u_p ++;
		while (u_p[size] != c && u_p[size])
			size ++;
		p_d_p[i] = ft_calloc((size + 1), sizeof(char));
		if (!p_d_p[i])
			free(p_d_p);
		if (!p_d_p[i])
			return (0);
		ft_strlcpy(p_d_p[i], u_p, size + 1);
		u_p += size;
		while (*u_p == c && *u_p)
			u_p ++;
		i ++;
		num_str--;
	}
	return (p_d_p);
}

	// if (num_str == 1 && u_p[1] == c)
	// 	return (p_d_p);