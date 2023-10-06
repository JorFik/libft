/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:16:17 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/06 12:51:43 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isalpha(char car)
{
	if ((car >= 101 && car <= 132) || (car >= 141 && car <= 172))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		return (0);
	if (ft_isalpha (argv[1][1]))
		printf("Es Alpha");
	if (!ft_isalpha (argv[1][1]))
		printf("No es Alpha");
}
