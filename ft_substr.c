/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:13:58 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 23:09:35 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, unsigned long len)
{
	char				*new_s;
	unsigned long		substring_length;

	if (ft_strlen(s) <= start)
		return (ft_calloc(1, 1));
	substring_length = (unsigned long)ft_strlen(&s[start]);
	if (substring_length < len)
		len = substring_length;
	new_s = (char *) ft_calloc((len + 1), sizeof(char));
	if (!new_s)
		return ((void *)0);
	ft_strlcpy(new_s, &s[start], len + 1);
	return (new_s);
}
