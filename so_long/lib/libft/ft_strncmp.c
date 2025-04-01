/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:12:58 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:51:12 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strncmp is a function from <string.h>
	It compares a specific number of characters from two strings
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && 0 < n)
	{
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// int	main(void)
// {
// 	char str1[] = "Hello, World!";
// 	char str2[] = "Hello, everyone!";
// 	size_t n = 5;

// 	printf("String 1: %s\n", str1);
// 	printf("String 2: %s\n", str2);
// 	printf("-------------------------------\n");

// 	int res_ft_strncmp = ft_strncmp(str1, str2, n);
// 	printf("ft_strncmp : ");
// 	if (res_ft_strncmp == 0)
// 		printf("The strings are equal up to %zu characters\n", n);
// 	else
// 		printf("The strings are not equal. %d\n", res_ft_strncmp);

// 	int res_strncmp = ft_strncmp(str1, str2, n);
// 	printf("strncmp		: ");
// 	if (res_strncmp == 0)
// 		printf("The strings are equal up to %zu characters\n", n);
// 	else
// 		printf("The strings are not equal. %d\n", res_strncmp);

// 	return (0);
// }