/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:26:25 by nchairun          #+#    #+#             */
/*   Updated: 2024/10/19 19:50:42 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* converts an integer into a string */

#include "libft.h"

static size_t	length_num(int n);

char	*ft_itoa(int n)
{
	int		length;
	char	*result;
	long	num;

	length = length_num(n);
	num = n;
	result = malloc(length + 1);
	if (result == 0)
		return (0);
	if (num < 0)
	{
		result[0] = '-';
		num = -1 * num;
	}
	if (num == 0)
		result[0] = '0';
	result[length] = '\0';
	length--;
	while (num != 0)
	{
		result[length] = num % 10 + '0';
		length--;
		num = num / 10;
	}
	return (result);
}

static size_t	length_num(int n)
{
	size_t	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length++;
	while (n)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(232));
// 	printf("%s\n", ft_itoa(1));
// 	return (0);
// }

// /*
// 	line 41
// 	for example, num = 232
// 	num % 10 + '0';
// 	232 % 10 + '0'
// 		2 	 + 48
// 	= 50 ('2' in ASCII table)

// 	ASCII table:
// 	0	48
// 	1	49
// 	2	50
// 	3	51
// 	4	52
// 	5	53
// 	6	54
// 	7	55
// 	8	56
// 	9	57
// */