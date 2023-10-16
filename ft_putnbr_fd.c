/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:23:56 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/16 16:14:46 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	double	nbr;
	long	count;

	count = 1;
	nbr = (long) n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < 0)
		nbr = -nbr;
	if (n == 0)
		ft_putchar_fd('0', fd);
	while ((nbr / 10.0) >= (1.0 / 10.0))
	{
		nbr /= 10;
		count *= 10;
	}
	nbr = (long) n;
	if (n < 0)
		nbr = -nbr;
	while (count > 1)
	{
		ft_putchar_fd((((long)nbr % count) / (count / 10)) + '0', fd);
		count /= 10;
	}
	return ;
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483647 -1, 1);
// 	return (0);
// }
