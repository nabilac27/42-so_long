/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:38:20 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:45:47 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isprint is a function from <ctype.h>
	It checks if a character is printable

	The printable standard defines 128 characters

	Control characters (0-31):
		Non-printing characters used for control purposes
		(e.g., carriage return, line feed, tab)
	Printable characters (32-126):
		Include letters, digits, punctuation marks, and special symbols
*/

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	char test = '#';

// 	printf("ft_isprint: ");
// 	if (ft_isprint(test))
// 	{
// 		printf("%c is a printable character.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not a printable character.\n", test);
// 	}

// 	printf("isprint   : ");
// 	if (isprint(test))
// 	{
// 		printf("%c is a printable character.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not a printable character.\n", test);
// 	}

// 	return (0);
// }