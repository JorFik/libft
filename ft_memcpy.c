/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:49:04 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/06 21:43:46 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t size)
{
	int	i;

	i = 0;
	while (size > 0)
	{
		if (*(unsigned char *)(src + i) != '\0')
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		else
		{
			*(unsigned char *)(dest + i) = '\0';
			return (dest);
		}
		size --;
		i ++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char		src[50] = "https://www.tutorialspoint.com";
// 	char		dest[50] = "Heloooo!!";

// 	printf("Before memcpy dest = %s\n", src);
// 	ft_memcpy(src, dest, 50);
// 	printf("After memcpy dest = %s\n", dest);

// 	return (0);
// }
