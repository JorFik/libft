/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 20:23:00 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/08 17:19:48 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *address, unsigned long size)
{
	ft_memset(address, 0, size);
}

// int	main(void)
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";

// 	printf("Before memset():	%s\n", str);
// 	ft_bzero(str + 13, 1);
// 	printf("After memset():		%s", str);
// 	return (0);
// }
