/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 21:45:59 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/06 22:02:19 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*temp;

	i = 0;
	while (len > 0)
	{
		if (*(unsigned char *)(src + i) != '\0')
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		else
		{
			*(unsigned char *)(dest + i) = '\0';
			return (dest);
		}
		len --;
		i ++;
	}
	return (dst);
}
