/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:36:55 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/05 17:03:40 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dst_size)
{
	unsigned long	src_size;
	int				counter;

	if (!src)
		return (0);
	src_size = 0;
	counter = 0;
	while (*(src + src_size) != '\0')
		src_size ++;
	if (dst_size <= 0)
		return (src_size);
	while (dst_size && src[counter])
	{
		if (dst_size == 1)
			break ;
		else
			dst[counter] = src[counter];
		counter ++;
		dst_size --;
	}
	dst[counter] = '\0';
	return (src_size);
}
