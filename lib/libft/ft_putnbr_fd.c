/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:33:01 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 21:39:03 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* output a number to a file descriptor */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -1 * num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	else
		ft_putchar_fd(num + '0', fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(2147483647, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(0, 1);
// }

// /*
// 	to compile:
// 		cc ft_putnbr_fd.c ft_putchar_fd.c
// */