/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:54:13 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/14 20:44:17 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_a_init(int n)
{
	char	*a;
	float	w_i;
	int		count;

	count = 0;
	w_i = (float) n;
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

char	*ft_itoa(int n)
{
	char	*a;
	float	w_i;
	int		i;

	w_i = (float) n;
	if (!n)
	{
		a = ft_calloc(2, sizeof(char));
		a[0] = '0';
		return (a);
	}
	a = ft_a_init(n);
	if (!a)
		return (0);
	i = ft_strlen(a);
	if (w_i < 0.0)
		w_i = -w_i;
	while ((w_i / 10.0) >= (1.0 / 10.0) && i && a[i - 1] != '-')
	{
		a[i --] = ((int)w_i % 10) + '0'; // esta mamada no sirve help
		w_i /= 10.0;
	}
	return (a);
}
