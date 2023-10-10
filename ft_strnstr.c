/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:45:18 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/10 18:46:31 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strln(const char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
		counter ++;
	return (counter);
}

char	*ft_strnstr(const char *haystack, const char *needle, unsigned long len)
{
	unsigned long	s_needle;
	unsigned long	match;
	unsigned long	i;
	char			*h;
	char			*n;

	s_needle = ft_strln(needle);
	h = (char *) haystack;
	n = (char *) needle;
	i = 0;
	if (s_needle == 0)
		return (h);
	while (i < len - 1)
	{
		match = 0;
		while (h[i] == n[match] && i < len && h[i] && n[match])
		{
			match ++;
			i ++;
		}
		if (match == s_needle)
			return (&h[i - s_needle]);
		i ++;
	}
	return (0);
}
