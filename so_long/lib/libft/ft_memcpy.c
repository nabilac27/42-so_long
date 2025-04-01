/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:00:33 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:47:36 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memcpy is a function from <string.h>
	It used to copy memory from one location to another
*/

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*ptr_src;
	char	*ptr_dst;
	size_t	i;

	ptr_src = (char *)src;
	ptr_dst = (char *)dst;
	i = 0;
	if (dst == 0 && src == 0)
	{
		return (0);
	}
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[32] = "Hello!";
// 	char	dest[32] = "Destination";

// 	printf("Source		: %s\n", src);
// 	printf("Destination	: %s\n", dest);
// 	printf("-------------------------------\n");
// 	ft_memcpy(dest, src, sizeof(src));
// 	printf("ft_memcpy: \"%s\"\n", dest);
// 	memcpy(dest, src, sizeof(src));
// 	printf("memcpy   : \"%s\"\n", dest);
// }

// /*
// 	The difference between memcpy and strcpy
// 	memcpy:
// 	Copies a specified number of bytes from source to destination
// 	strcpy:
// 	Copies a null-terminated string from source to destination
// */