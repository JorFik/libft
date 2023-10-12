/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:53:12 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/12 16:05:44 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;

	new_s = ft_calloc(ft_strlen(s1) + ft_strlen (s2) + 1, sizeof(char));
	if (new_s == (void *)0)
		return ((void *)0);
	ft_strlcpy(new_s, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_s, s2, ft_strlen(s1) + ft_strlen (s2) + 1);
	return (new_s);
}
