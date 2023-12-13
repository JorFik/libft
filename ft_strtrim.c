/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:13:39 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/13 23:35:13 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_files/libft_str_manipulation.h"
#include "h_files/libft_str_checks.h"
#include "h_files/libft_mem_allocation.h"

char	*ft_strtrim(char const *src, char const *set)
{
	int	size_str;
	int	i;

	size_str = ft_strlen(src);
	i = 0;
	if (!src || !*src)
		return (ft_calloc(1, sizeof(char)));
	while (ft_strchr((char *)set, src[i]) && src[i++])
		size_str --;
	while (ft_strrchr((char *)set, (src + i)[size_str]))
		size_str --;
	return (ft_substr(src, i, size_str + 1));
}
