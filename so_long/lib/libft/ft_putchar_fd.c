/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:30:17 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 21:36:48 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* output a char to a file descriptor */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int	fd;

// 	fd = 1;
// 	ft_putchar_fd('a', fd);
// 	ft_putchar_fd('\n', fd);
// 	return (0);
// }

// /*
// 	file descriptor:
// 	an abstract indicator used to access a file or other input/output resources

// 	Standard File Descriptors:
// 	0: Standard Input (stdin)
// 	1: Standard Output (stdout)
// 	2: Standard Error (stderr)
// */