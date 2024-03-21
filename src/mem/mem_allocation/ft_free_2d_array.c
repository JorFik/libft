/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:10:56 by JFikents          #+#    #+#             */
/*   Updated: 2024/02/01 14:11:33 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_2d_array(void ***array, int size)
{
	int	i;

	i = 0;
	while (size == -1 && (*array)[i])
		ft_free_n_null(&(array[0][i++]));
	while (size > 0 && i < size)
		ft_free_n_null(&(array[0][i++]));
	ft_free_n_null((void **)array);
}
