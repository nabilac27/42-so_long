/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:51:04 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:52:49 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	toupper is a function from <ctype.h>
	It converts character to uppercase

	Lowercase letters ('a' to 'z') have ASCII values ranging from 97 to 122
	Uppercase letters ('A' to 'Z') have ASCII values ranging from 65 to 90

	There is a consistent difference of 32 between the ASCII
	values of lowercase and uppercase
*/

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

// int	main(void)
// {
// 	char test = 'z';

//     char result = ft_toupper(test);

// 	printf("ft_toupper: ");
// 	if (ft_toupper(result))
// 	{
// 		printf("%c\n", result);
// 	}
// 	else
// 	{
// 		printf("%c\n", result);
// 	}

// 	printf("toupper   : ");
// 	if (toupper(result))
// 	{
// 		printf("%c\n", result);
// 	}
// 	else
// 	{
// 		printf("%c\n", result);
// 	}

// 	return (0);
// }
