/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:25:48 by mamarin-          #+#    #+#             */
/*   Updated: 2025/02/15 13:22:40 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int printf_type(const char *format, va_list args)
{
	int count;

	count = 0;
	if (*format == 'c')
		count += print_char(va_arg(args, int));
	return (count);
}


int	ft_printf(const char *format, ...)
{
	int	count;

	count = 0;
	va_list args;
	va_start(args, format);
	while (*format)
	{
		if (ft_strchr("cspdiuxX", *(format + 1)) && *format == '%')
		{
			format++;
			count += printf_type(format, args);
		}
		else
		{
			count += print_char(*format);
			format++;
		}
	}
	va_end(args);
	return (count);
}

int main()
{
	int count = ft_printf("Hola%dADIOS", 0);
	ft_printf("%d", count);
}