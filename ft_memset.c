/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:36:20 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/06 17:06:42 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *address, unsigned char filler, int size)
{
	if (*address == '\0' && size > 0)
		return (0);
	else
	{
		*address = filler;
		return (ft_memset(address + 1, filler, size - 1));
	}
}
