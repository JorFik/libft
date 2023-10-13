/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 00:39:05 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/14 01:00:21 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_charcount(char const *s, char c)
{
	unsigned long	appearences;
	char			*new_p;

	appearences = 0;
	if (*s)
	{
		new_p = ft_strchr((char *)s, c);
		while (new_p)
		{
			appearences ++;
			while (*new_p == c && *new_p)
				new_p ++;
			if (*new_p == '\0')
				return (appearences);
			new_p = ft_strchr(new_p, c);
		}
	}
	return (appearences ++);
}

while (u_p[size])
	{
		while (u_p[size] == c && u_p[size])
			size++;
		if ((u_p[size - 1] == c || size == 0) && u_p[size])
		{
			p_d_p[i] = ft_substr(&u_p[size], 0, ft_mstrchr(&u_p[size], c));
			if (!p_d_p[i])
				free(p_d_p);
			if (!p_d_p[i])
				return (0);
			i ++;
		}
		size++;
	}