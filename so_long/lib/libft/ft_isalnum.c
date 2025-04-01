/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:30:18 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:43:49 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isalnum is a function from <ctype.h>
	It checks if a character is an alphanumeric

	alphanumeric = contains letters (a-z, A-Z, 0-9) and numbers
*/

int	ft_isalnum(int c)
{
	if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z') || ('A' <= c
			&& c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	char test = '#';

// 	printf("ft_isalnum: ");
// 	if (ft_isalnum(test))
// 	{
// 		printf("%c is alphanumeric.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not alphanumeric.\n", test);
// 	}

// 	printf("isalnum   : ");
// 	if (isalnum(test))
// 	{
// 		printf("%c is alphanumeric.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not alphanumeric.\n", test);
// 	}

// 	return (0);
// }