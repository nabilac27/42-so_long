/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:28:06 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:45:23 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	isdigit is a function from <ctype.h>
	It checks if a character is a digit
*/

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	char test = '1';

// 	printf("ft_isdigit: ");
// 	if (ft_isdigit(test))
// 	{
// 		printf("%c is a digit.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not a digit.\n", test);
// 	}

// 	printf("isdigit   : ");
// 	if (isdigit(test))
// 	{
// 		printf("%c is a digit.\n", test);
// 	}
// 	else
// 	{
// 		printf("%c is not a digit.\n", test);
// 	}

// 	return (0);
// }