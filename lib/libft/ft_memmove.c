/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:55:38 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:47:55 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memmove is a function from <string.h>
	It moves a block of memory from one location to another
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_dst;
	char	*ptr_src;
	size_t	i;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	i = 0;
	if (!dst && !src)
		return (0);
	if (ptr_dst > ptr_src)
		while (len--)
			ptr_dst[len] = ptr_src[len];
	else
	{
		while (i < len)
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[50] = "HelloTest";
// 	char	*dest	= src;

// 	size_t	len_str = 3;

// 	ft_memmove(dest, src, len_str);
// 	printf("ft_memmove	: %s\n\n", src);

// 	strcpy(src, "HelloTest"); // Restore the original string

// 	memmove(dest, src, len_str);
// 	printf("memmove		: %s\n", src);

// 	return (0);
// }