/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:16:11 by nchairun          #+#    #+#             */
/*   Updated: 2024/11/14 01:03:00 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_p(void *ptr)
{
	int	length;
	int	hex_length;

	length = 0;
	if (ptr == NULL)
	{
		length = ft_printf_s("0x0");
		if (length == -1)
			return (-1);
		return (length);
	}
	else
	{
		length = ft_printf_s("0x");
		if (length == -1)
			return (-1);
		hex_length = ft_printf_hex((unsigned long)ptr);
		if (hex_length == -1)
			return (-1);
		return (length + hex_length);
	}
}

int	ft_printf_x(unsigned int n, char specifier)
{
	if (specifier == 'x')
		return (ft_printf_hex(n));
	else
		return (ft_printf_hex_upper(n));
}

int	ft_printf_hex(unsigned long n)
{
	char	buffer[16];
	char	*hex_digit;
	int		len;
	int		i;

	hex_digit = "0123456789abcdef";
	len = 0;
	if (n == 0)
		return (ft_printf_c('0'));
	while (n > 0)
	{
		buffer[len++] = hex_digit[n % 16];
		n = n / 16;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (ft_printf_c(buffer[i--]) == -1)
			return (-1);
	}
	return (len);
}

int	ft_printf_hex_upper(unsigned long n)
{
	char	buffer[16];
	char	*hex_digit_upper;
	int		len;
	int		i;

	hex_digit_upper = "0123456789ABCDEF";
	len = 0;
	if (n == 0)
		return (ft_printf_c('0'));
	while (n > 0)
	{
		buffer[len++] = hex_digit_upper[n % 16];
		n = n / 16;
	}
	i = len - 1;
	while (i >= 0)
	{
		if (ft_printf_c(buffer[i--]) == -1)
			return (-1);
	}
	return (len);
}
