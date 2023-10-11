/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:35:49 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/11 13:24:37 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strle(const char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
		counter ++;
	return (counter);
}

char	*ft_strrchr(char *src, int c)
{
	int		i;
	char	busco;

	busco = (char) c;
	i = ft_strle(src);
	while ((i >= 0) && src[i] != busco)
		i --;
	if (i < 0)
		return (0);
	if (src[i] == busco)
		return (&src[i]);
	else
		return (0);
}
