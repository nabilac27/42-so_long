/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchairun <nchairun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 22:45:32 by nchairun          #+#    #+#             */
/*   Updated: 2024/11/22 01:31:23 by nchairun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	arg_ptr;
	int		i;
	int		length;
	int		result;

	va_start(arg_ptr, str);
	i = 0;
	length = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			result = ft_printf_format(str[i], arg_ptr);
		}
		else
			result = write(1, &str[i], 1);
		if (result == -1)
			return (-1);
		length = length + result;
		i++;
	}
	va_end(arg_ptr);
	return (length);
}

int	ft_printf_format(char specifier, va_list arg_ptr)
{
	if (specifier == 'c')
		return (ft_printf_c(va_arg(arg_ptr, int)));
	else if (specifier == 's')
		return (ft_printf_s(va_arg(arg_ptr, char *)));
	else if (specifier == 'p')
		return (ft_printf_p(va_arg(arg_ptr, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_printf_d(va_arg(arg_ptr, int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_printf_x(va_arg(arg_ptr, unsigned int), specifier));
	else if (specifier == 'u')
		return (ft_printf_u(va_arg(arg_ptr, unsigned int)));
	else
		return (ft_printf_c('%'));
}
