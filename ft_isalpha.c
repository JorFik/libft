/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: JFikents <JFikents@student.42Heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:16:17 by JFikents          #+#    #+#             */
/*   Updated: 2023/10/09 13:30:14 by JFikents         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int car)
{
	if ((car >= 65 && car <= 90) || (car >= 97 && car <= 122))
		return (1);
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	if (!(argc == 2))
// 		return (0);
// 	printf ("Estas checando la letra %c%c", argv[1][0], '\n');
// 	if (ft_isalpha (argv[1][0]))
// 		printf("Es Alpha");
// 	if (!ft_isalpha (argv[1][0]))
// 		printf("No es Alpha");
// 	return (0);
// }
