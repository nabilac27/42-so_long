/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:22:04 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 20:35:45 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_strtrim trims the beginning and end of string
	with specific set of chars
	
	s1 = pointer to a string
	set = set of char to be trimmed
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		rear;
	int		size_trimmed;
	char	*result;

	if (s1 == 0 || set == 0)
		return (0);
	front = 0;
	rear = ft_strlen(s1) - 1;
	while (front <= rear && ft_strchr(set, s1[front]))
		front++;
	if (front > rear)
		return (ft_strdup(s1 + rear + 1));
	while (ft_strchr(set, s1[rear]) && rear >= 0)
		rear--;
	size_trimmed = rear - front + 2;
	result = malloc(size_trimmed);
	if (result == 0)
		return (0);
	ft_strlcpy(result, &s1[front], size_trimmed);
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("zzHizz", "z"));
// }

// /*
// 	to compile:
// 	cc ft_strtrim.c ft_strdup.c ft_strlcpy.c ft_strlen.c ft_memcpy.c ft_strchr.c
// */