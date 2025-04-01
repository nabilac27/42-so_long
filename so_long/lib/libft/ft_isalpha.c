/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:15:29 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:44:26 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isalpha is a function from <ctype.h>
	It checks if a character is alphabetic
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int	main(void)
// {
// 	char test = 'A';

// 	printf("ft_isalpha: ");
// 	if (ft_isalpha(test))
// 	{
// 		printf("%c is alphabetic.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not alphabetic.\n", test);
// 	}

// 	printf("isalpha   : ");
// 	if (isalpha(test))
// 	{
// 		printf("%c is alphabetic.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not alphabetic.\n", test);
// 	}

// 	return (0);
// }