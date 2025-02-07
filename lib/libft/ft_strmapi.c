/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:27:30 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 20:34:13 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_strmapi applies a function to each character of a string
	s: The string on which to iterate
	f: The function to apply to each character
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	i;

	if (s == 0)
		return (0);
	s2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (s2 == 0)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

// char	to_lower(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strmapi("AbCdEfGhIjKl", to_lower);
// 	printf("%s\n", str);
// }

// /*
// 	to compile:
// 	cc -Wall -Wextra -Werror ft_strmapi.c ft_toupper.c ft_strlen.c
// */