/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:36:20 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/08 17:17:31 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *address, int filler, unsigned long size)
{
	if (size <= 0)
		return (0);
	else
	{
		*(unsigned char *)address = filler;
		ft_memset(address + 1, filler, size - 1);
		return (address);
	}
}

// int	main(void)
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";

// 	printf("Before memset(): %s\n", str);
// 	ft_memset(str + 13, '.', 8 * sizeof(unsigned char));
// 	printf("After memset():  %s", str);
// 	return (0);
// }
