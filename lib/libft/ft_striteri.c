/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:28:34 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 21:21:49 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_striteri function iterates over each character
	in a string and applies a given function to each character,
	passing the character's index and a pointer to the character itself
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// void	function(unsigned int i, char *c)
// {
// 	c = c + i;
// }

// int	main(void)
// {
// 	char str[] = "abcdef";

// 	ft_striteri(str, &function);
// 	printf("%s\n", str);
// 	return (0);
// }