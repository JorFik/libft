/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:57:46 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/17 16:11:30 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list			*new_node;

	new_node = ft_calloc(1, sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	return (new_node);
}
	// if (content)
	// {
	// 	new_node->content = ft_calloc(s_content + 1, sizeof(content));
	// 	if (!new_node->content)
	// 		free(new_node);
	// 	if (!new_node->content)
	// 		return (NULL);
	// 	ft_memcpy(new_node->content, content, s_content);
	// }
	// else
