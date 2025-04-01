/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:43:26 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/28 22:05:04 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* concatenates two strings into a new string */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr_malloc;

	if (s1 == 0 || s2 == 0)
		return (0);
	ptr_malloc = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr_malloc == 0)
		return (0);
	ft_strlcpy(ptr_malloc, s1, ft_strlen(s1) + 1);
	ft_strlcpy((ptr_malloc + ft_strlen(s1)), s2, (ft_strlen(s2) + 1));
	return (ptr_malloc);
}

/*
	to compile:
	cc ft_strjoin.c ft_strlcpy.c ft_strlen.c
*/