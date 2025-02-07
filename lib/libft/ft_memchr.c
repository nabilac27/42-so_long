/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:03:15 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:46:38 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memchr is a function from <string.h>
	
	It locates the first occurrence of a specific character
	in a block of memory
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr_s;
	size_t	i;

	ptr_s = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)ptr_s[i] == (unsigned char)c)
		{
			return ((char *)&ptr_s[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char find = 'o';
// 	int n = 12;

// 	char *res_ft_memchr;
// 	char *res_memchr;

// 	printf("src          		: %s\n", src);
// 	printf("Character to find: %c\n", find);
// 	printf("Number of bytes  : %d\n", n);
// 	printf("-------------------------------\n");

// 	// Search for the character 'o' in the first 12 bytes using custom ft_memchr
// 	res_ft_memchr = ft_memchr(src, find, n);
// 	printf("ft_memchr\n");
// 	if (res_ft_memchr != NULL)
// 	{
// 		printf("Character found   : %c\n", *res_ft_memchr);
// 		printf("Position in string: %ld\n\n", res_ft_memchr - src);
// 	}
// 	else
// 	{
// 		printf("Character not found within the given range.\n\n");
// 	}

// 	res_memchr = memchr(src, find, n);
// 	printf("memchr\n");
// 	if (res_memchr != NULL)
// 	{
// 		printf("Character found   : %c\n", *res_memchr);
// 		printf("Position in string: %ld\n", res_memchr - src);
// 	}
// 	else
// 	{
// 		printf("Character not found within the given range.\n");
// 	}

// 	return (0);
// }