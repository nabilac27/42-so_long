/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:18:02 by nchairun          #+#    #+#             */
/*   Updated: 2025/01/27 22:41:49 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strchr is a function from <string.h>
	It searches for the first occurrence of a character in a string
*/

#include "libft.h"

char	*ft_strchr(const char *ptr_string, int ptr_find)
{
	int		i;
	char	char_ptr_find;

	i = 0;
	char_ptr_find = (char)ptr_find;
	while (ptr_string[i] != '\0' || ptr_string[i] == char_ptr_find)
	{
		if (ptr_string[i] == char_ptr_find)
		{
			return ((char *)&ptr_string[i]);
		}
		i++;
	}
	if (char_ptr_find == '\0')
		return ((char *)&ptr_string[i]);
	return (0);
}

// int	main(void)
// {
// 	char	string[] = "This is a string";
// 	char	*result_strchr;
// 	char	*result_ft_strchr;

// 	char find = 'i'; // Input

// 	printf("String		= %s\n", string);
// 	printf("To find   = %c\n", find);
// 	printf("---------------------------\n");

// 	result_strchr = strchr(string, find);
// 	if (result_strchr != 0)
// 		printf("strchr    = %s\n", result_strchr);
// 	else
// 		printf("strchr    = character not found\n");

// 	result_ft_strchr = ft_strchr(string, find);
// 	if (result_ft_strchr != 0)
// 		printf("ft_strchr = %s\n", result_ft_strchr);
// 	else
// 		printf("ft_strchr = character not found\n\n");

// 	return (0);
// }