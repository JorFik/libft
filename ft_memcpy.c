/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:49:04 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/07 19:50:25 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t size)
{
	int	i;

	i = 0;
	if (!src)
		return (src);
	while (size --)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i ++;
	}
	return (dest);
}

// *(char *)(dest + size) = *(char *)(src + size);
// int	main(void)
// {
// 	char		src[50] = "Hasta la Proxima";
// 	char		dest[50] = "Heloooo!!";

// 	printf("Before memcpy dest = %s\n", dest);
// 	ft_memcpy(dest, src, 50);
// 	printf("After memcpy dest = %s\n", dest);

// 	return (0);
// }
