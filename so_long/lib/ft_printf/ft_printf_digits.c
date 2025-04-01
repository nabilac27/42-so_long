/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:14:28 by nchairun          #+#    #+#             */
/*   Updated: 2024/11/22 01:28:51 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	special_case(void);
int	negative(int n);
int	single_digit(int n);

int	ft_printf_d(int n)
{
	int		len;
	char	result[11];
	int		i;

	len = 0;
	if (n == -2147483648)
		return (special_case());
	if (n < 0)
		return (negative(n));
	if (n == 0)
		return (single_digit(n));
	while (n > 0)
	{
		result[len++] = (n % 10) + '0';
		n = n / 10;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (ft_printf_c(result[i--]) == -1)
			return (-1);
	}
	return (len);
}

int	ft_printf_u(unsigned int n)
{
	int		len;
	char	result[10];
	int		i;

	len = 0;
	if (n == 0)
		return (ft_printf_c('0'));
	while (n > 0)
	{
		result[len] = (n % 10) + '0';
		n = n / 10;
		len++;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (ft_printf_c(result[i]) == -1)
			return (-1);
		i--;
	}
	return (len);
}

int	special_case(void)
{
	if (ft_printf_s("-2147483648") == -1)
		return (-1);
	return (11);
}

int	negative(int n)
{
	int		len;
	char	result[11];
	int		i;

	if (ft_printf_c('-') == -1)
		return (-1);
	n = -1 * n;
	len = 0;
	while (n > 0)
	{
		result[len++] = (n % 10) + '0';
		n = n / 10;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (ft_printf_c(result[i--]) == -1)
			return (-1);
	}
	return (len + 1);
}

int	single_digit(int n)
{
	if (ft_printf_c(n + '0') == -1)
		return (-1);
	return (1);
}
