/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:43:16 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 19:50:46 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	strlen is a function from <string.h>
	It calculates the length of a string
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {
//     char test[] = "this is 10";
//     printf("%d\n", ft_strlen(test));
//     return(0);
// }