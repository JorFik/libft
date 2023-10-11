/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 23:45:18 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/11 13:12:27 by JFikents         ###   ########.fr       */
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
	unsigned long	match;
	unsigned long	i;
	char			*h;
	char			*n;

	h = (char *) haystack;
	n = (char *) needle;
	i = 0;
	if (ft_strln(needle) == 0 || h == n)
		return (h);
	while (i < len && len > 0 && *h != '\0' && !(ft_strln(n) > ft_strln(h)))
	{
		match = 0;
		while (h[i] == n[match] && i < len && (h[i] || n[match]))
		{
			match ++;
			i ++;
		}
		if (match == ft_strln(needle))
			return (&h[i - ft_strln(needle)]);
		i -= match;
		i ++;
	}
	return (0);
}
