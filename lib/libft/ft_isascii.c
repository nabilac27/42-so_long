/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:34:17 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:44:54 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isascii is a function from <ctype.h>
	It checks if a character is an ASCII character

	ASCII (American Standard Code for Information Interchange)
	is a character encoding standard used for representing text
	in computers and other devices that use text

	It encodes 128 specified characters into 7-bit integers
*/

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	char test = '#';

// 	printf("ft_isascii: ");
// 	if (ft_isascii(test))
// 	{
// 		printf("%c is an ASCII character.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not an ASCII character.\n", test);
// 	}

// 	printf("isascii   : ");
// 	if (isascii(test))
// 	{
// 		printf("%c is an ASCII character.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not an ASCII character.\n", test);
// 	}

// 	return (0);
// }