/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:39:56 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:47:14 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memcmp is a function from <string.h>

	It compares two blocks of memeory
	It will return 0 if the memory blocks are equal
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ptr_s1;
	char	*ptr_s2;
	size_t	i;

	ptr_s1 = (char *)s1;
	ptr_s2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_s1[i] != ptr_s2[i])
		{
			return ((unsigned char)ptr_s1[i] - (unsigned char)ptr_s2[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char a[10] = "hello";
// 	char b[10] = "hel1o";

// 	int res_ft_memcmp = ft_memcmp(a, b, sizeof(a));
// 	printf("ft_memcmp: ");
// 	// if (res_ft_memcmp == 0)
// 	// {
// 	// 	printf("%d, both are equal\n\n", ft_memcmp(a, b, sizeof(a)));
// 	// }
// 	// else
// 	// {
// 	// 	printf("%d, both are not equal\n\n", ft_memcmp(a, b, sizeof(a)));
// 	// }

// 	// int res_memcmp = memcmp(a, b, sizeof(a));
// 	// printf("memcmp		: ");
// 	// if (res_ft_memcmp == 0)
// 	// {
// 	// 	printf("%d, both are equal\n", ft_memcmp(a, b, sizeof(a)));
// 	// }
// 	// else
// 	// {
// 	// 	printf("%d, both are not equal\n", memcmp(a, b, sizeof(a)));
// 	// }

// 	return (0);
// }