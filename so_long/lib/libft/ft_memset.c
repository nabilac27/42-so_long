/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:57:57 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:48:25 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	memset is a function from <string.h>
	memset stands for "memory set"
	It sets a block of memory to a specific value

	It is often utilized for initializing or resetting memory areas,
	such as arrays or structures, to a known state
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr_b;
	size_t	i;

	i = 0;
	ptr_b = b;
	while (i < len)
	{
		ptr_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	str[] = "Hello, World!";
// 	size_t	size_str;
// 	int		c;

// 	size_str = sizeof(str) - 1;
// 	c = 'A';

// 	printf("Input		: %s\n", str);
// 	printf("-------------------------------\n");

// 	ft_memset(str, c, size_strn);
// 	printf("ft_memset	: %s\n", str);

// 	memset(str, c, size_strn);
// 	printf("memset		: %s\n", str);

// 	return (0);
// }

// /*
// 	void* is a Generic Pointer Type:
// 	It can point to any data type,
// 	but it does not have a specific data type
// 	associated with it

// 	a void* can't be dereferenced
// 	or perform pointer arithmetic on it
// 	because the compiler does not know
// 	what type of data it points to

// 	To set each byte in memory to a specific value,
// 	we need to treat the memory as an array of bytes

// 	In C, a char is defined to be exactly one byte,
// 	casting the void* pointer to a char* allows us
// 	to access and modify individual bytes

// 	Dereferencing:
// 	accessing the value that a pointer is pointing to
// */