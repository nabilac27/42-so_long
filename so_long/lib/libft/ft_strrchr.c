/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:46:49 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:52:01 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strrchr is a function from <string.h>
	It searches for the last occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	if (c == '\0')
	{
		return ((char *)&s[len]);
	}
	return (0);
}
// int	main(void)
// {
// 	char	string[] = "This is a string";
// 	char	*result_strrchr;
// 	char	*result_ft_strrchr;

// 	char find = 'i'; // Input

// 	printf("String  = %s\n", string);
// 	printf("To find = %c\n", find);
// 	printf("---------------------------\n");

// 	result_strrchr = strrchr(string, find);
// 	if (result_strrchr != 0)
// 		printf("strrchr    = %s\n", result_strrchr);
// 	else
// 		printf("strrchr    = character not found\n");

// 	result_ft_strrchr = ft_strrchr(string, find);
// 	if (result_ft_strrchr != 0)
// 		printf("ft_strrchr = %s\n", result_ft_strrchr);
// 	else
// 		printf("ft_strrchr = character not found\n\n");

// 	return (0);
// }