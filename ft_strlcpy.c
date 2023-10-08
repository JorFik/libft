/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:36:55 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/08 16:48:25 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dst_size)
{
	unsigned long	src_size;
	int				counter;

	src_size = 0;
	counter = 0;
	while (*(src + src_size) != '\0')
		src_size ++;
	if (dst_size <= 0)
		return (src_size);
	while (dst_size -- && *src)
	{
		if (dst_size == 1)
			dst[counter] = '\0';
		if (dst_size == 1)
			return (src_size);
		else
		{
			dst[counter] = src[counter];
			counter ++;
		}
	}
	return (src_size);
}
