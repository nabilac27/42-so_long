/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:40:46 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:43:17 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	calloc is a function from <stdlib.h>
	It stands for "contiguous allocation"
	It allocates memory and sets its bytes' values to 0.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr_malloc;

	ptr_malloc = malloc(count * size);
	if (ptr_malloc == 0)
		return (0);
	ft_bzero(ptr_malloc, (count * size));
	return (ptr_malloc);
}

// int	main(void)
// {
// 	char *str;
// 	int i;
// 	int n_char;

// 	n_char = 10; // Number of characters to allocate
// 	i = 0;

// 	str = (char *)ft_calloc(n_char, sizeof(char));
// 	if (!str)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	while (i < n_char - 1)
// 	{
// 		str[i] = '0';
// 		i++;
// 	}
// 	str[i] = '\0';

// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }

// /*
// 	to compile:
// 	cc -Wall -Wextra -Werror ft_calloc.c ft_bzero.c
// */