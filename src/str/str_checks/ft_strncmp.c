/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:11:10 by JFikents          #+#    #+#             */
/*   Updated: 2023/12/05 17:51:44 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned long n)
{
	unsigned long	i;

	i = 0;
	if (!s1 && s2)
		return (-(unsigned char)s2[i]);
	if (!s2 && s1)
		return ((unsigned char)s1[i]);
	if (n == 0 || (!s1 && !s2))
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i] && s2[i])
		i ++;
	if (s1[i] != s2[i])
		return ((unsigned char)s1[i] - (unsigned char) s2[i]);
	else
		return (0);
}
