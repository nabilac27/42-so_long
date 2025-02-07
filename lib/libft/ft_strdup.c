/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:33:39 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:49:10 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strdup is a function from <stdlib.h>
	It  duplicate a string by allocating sufficient memory
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr_malloc;

	ptr_malloc = malloc(ft_strlen(s1) + 1);
	if (ptr_malloc == 0)
		return (0);
	ft_strlcpy(ptr_malloc, s1, ft_strlen(s1) + 1);
	return (ptr_malloc);
}

// int	main(void)
// {
// 	char	*src;
// 	char	*dup;

// 	src = "Hello, World!";
// 	dup = ft_strdup(src);
// 	printf("src		: %s\n", src);
// 	printf("-----------------------\n");
// 	printf("ft_strdup: %s\n", dup);
// 	printf("strdup		: %s\n", dup);
// 	free(dup);
// 	return (0);
// }

// /*
// 	to compile:
// 	cc ft_strdup.c ft_strlen.c ft_memcpy.c
// */

// /*
// 	difference between strdup and strcpy
// 	strdup:
// 	Allocates memory dynamically, returns a pointer to the new string
// 	The caller must free the memory

// 	strcpy:
// 	copies a string to an existing buffer
// 	The caller must ensure the buffer is large enough
// */