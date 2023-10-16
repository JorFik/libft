/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:54:13 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/16 12:15:57 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_a_init(long n)
{
	char	*a;
	double	w_i;
	int		count;

	count = 0;
	w_i = (double) n;
	if (n < 0)
		count ++;
	if (n < 0)
		w_i *= -1.0;
	while ((w_i / 10.0) >= (1.0 / 10.0))
	{
		w_i /= 10.0;
		count++;
	}
	a = ft_calloc(count + 1, sizeof(char));
	if (!a)
		return (0);
	if (n < 0)
		a[0] = '-';
	return (a);
}

long	ft_i_init(long n)
{
	double	w_i;
	int		count;

	count = 0;
	w_i = (double) n;
	if (n < 0)
		count ++;
	if (n < 0)
		w_i *= -1.0;
	while ((w_i / 10.0) >= (1.0 / 10.0))
	{
		w_i /= 10.0;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*a;
	double	w_i;
	long	i;

	w_i = (double) n;
	if (!n)
	{
		a = ft_calloc(2, sizeof(char));
		a[0] = '0';
		return (a);
	}
	a = ft_a_init(n);
	if (!a)
		return (0);
	i = ft_i_init(n) - 1;
	if (w_i < 0.0)
		w_i = -w_i;
	while ((w_i / 10.0) >= (1.0 / 10.0) && i + 1 && a[i] != '-')
	{
		a[i] = ((long)w_i % 10) + '0';
		w_i /= 10.0;
		i --;
	}
	return (a);
}

		// printf("i = %li\n", i);
// printf("entre\nguardare en a[%li]: %c\n", i, (char)(((long)w_i % 10) + '0'));
// int	main(void)
// {
// 	char	*a;

// 	printf("your new a: %s", a = ft_itoa(-123));
// 	free(a);
// 	return (0);
// }
