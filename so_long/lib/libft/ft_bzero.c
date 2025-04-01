/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:42:44 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:42:40 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	bzero is a function from <strings.h>
	It sets the values of the first n bytes to zero
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr_s;

	ptr_s = (char *)s;
	ft_memset(ptr_s, 0, n);
}

// int	main(void)
// {
// 	char str[] 		= "Hello, World!";
// 	size_t size_str = sizeof(str);

// 	printf("Input	: %s\n", str);
// 	printf("--------------------------\n");

// 	ft_bzero(str, size_str);
// 	printf("ft_bzero: %s\n", str);

// 	bzero(str, size_str);
// 	printf("bzero   : %s\n", str);

// 	return (0);
// }