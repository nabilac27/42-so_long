/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:56:32 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:50:30 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strlcpy is a function from <string.h>
	It copies a string with a size limit

	* take full size of destination buffer
	* guarantee null terminator in the end
	* null terminator in dstsize
	* copies up to dstsize
*/

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (dstsize == 0)
		return (i);
	while (j < dstsize - 1 && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// int	main(void)
// {
// 	char src[] = "Hi!";
// 	char dst1[] = "Hello";
// 	char dst2[20];

// 	size_t n = strlen(src) + 1;

// 	printf("source		: %s\n", src);
// 	printf("-------------------------\n");

// 	size_t result_ft_strlcpy = ft_strlcpy(dst1, src, n);
// 	printf("ft_strlcpy	: %s\n", dst1);
// 	printf("length		: %zu\n", n);

// 	// size_t result_strlcpy = ft_strlcpy(dst2, src, n);
// 	// printf("strlcpy		: %s\n", dst2);

// 	return (0);
// }
