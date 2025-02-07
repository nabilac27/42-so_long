/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:28:56 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:50:05 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strlcat is a function from <string.h>
	It used to concatenate string to an specific size
	It appends the src string to the end of the dst string

	* append src to the end of dst
	* append at most dstsize - strlen(dst) - 1
	* NULL-terminate, unless
		dstsize is 0 or the original dst string was longer than dstsize
	* If the src and dst strings overlap, the behavior is undefined
*/

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < dstsize)
	{
		i++;
	}
	while (src[j] && (i + j + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < dstsize)
	{
		dst[i + j] = '\0';
	}
	return (ft_strlen(src) + i);
}

// int	main(void)
// {
// 	char dst[30] = "123";
// 	const char *src = "456";

// 	size_t dst_size = 7;

// 	ft_strlcat(dst, src, dst_size);
// 	printf("resulting string = %s\n", dst);
// 	printf("total length	= %zu\n", dst_size);

// 	return (0);
// }

// /*
// 	to compile:
// 	cc ft_strlcat.c ft_strlen.c
// */