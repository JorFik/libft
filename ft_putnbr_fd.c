/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:23:56 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/16 13:37:37 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	nbr = ft_itoa(n);
	if (!nbr)
		return ;
	ft_putstr_fd(nbr, fd);
	free(nbr);
	return ;
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483647 -1, 1);
// 	return (0);
// }
