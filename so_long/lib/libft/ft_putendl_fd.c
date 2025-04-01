/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:32:22 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 21:35:47 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	output a string to a file descriptor,
	followed by a new line
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	char	str[] = "Hello World!";
// 	int fd = 1;

// 	ft_putendl_fd(str, fd);
// 	return (0);
// }

// /*
// 	to compile:
// 	cc ft_putendl_fd.c ft_putstr_fd.c ft_strlen.c
// */