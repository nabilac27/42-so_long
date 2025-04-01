/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:33:44 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:51:32 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strnstr is a function from <string.h>
	It  used to locate the first occurrence of a substring
	within a string, up to a specified number of characters
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
	{
		return ((char *)&haystack[i]);
	}
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[]		= "aBCd";
// 	char substr[] 		= "BCd";
// 	size_t n 		= 25;

// 	char *result_ft_strnstr = ft_strnstr(str, substr, n);
// 	char *result_strnstr	= strnstr(str, substr, n);

// 	printf("ft_strnstr	:");
// 	if (result_ft_strnstr != 0)
// 	{
// 		printf("%s\n", result_ft_strnstr);
// 	}
// 	else
// 	{
// 		printf("Substring not found.\n");
// 	}

// 	printf("strnstr		:");
// 	if (result_strnstr != 0)
// 	{
// 		printf("%s\n", result_strnstr);
// 	}
// 	else
// 	{
// 		printf("Substring not found.\n");
// 	}

// 	return (0);
// }
