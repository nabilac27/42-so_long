/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:00:08 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 20:40:41 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Allocates (with malloc(3)) and returns a substring from the string ’s’
	The substring begins at index ’start’ and is of maximum size ’len’
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr_malloc;

	i = 0;
	j = start;
	if (s == 0)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	ptr_malloc = (char *)malloc(len + 1);
	if (ptr_malloc == 0)
		return (0);
	while (i < len && s[j] != '\0')
	{
		ptr_malloc[i] = s[j];
		i++;
		j++;
	}
	ptr_malloc[i] = '\0';
	return (ptr_malloc);
}

// int	main(void)
// {
// 	char	*str;

// 	str = ft_substr("Hello, World", 7, 5);

// 	printf("%s\n", str);

// 	return (0);
// }

// /*
// 	to compile:
// 	cc ft_substr.c ft_strdup.c ft_strlen.c
// */