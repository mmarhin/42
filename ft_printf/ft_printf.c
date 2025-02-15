/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:25:48 by mamarin-          #+#    #+#             */
/*   Updated: 2025/02/15 10:27:20 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	count;

	count = 0;
	va_list args;
	va_start(args, format);

	while(*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			if (*format == 'c')
							
			else if (*format == 's')

			else if (*format == 'p')

			else if (*format == 'd')

			else if (*format == 'i')

			else if (*format == 'u')

			else if (*format == 'x')

			else if (*format == 'X')
		}
	}
	else
	{
		write(1,*format,1);
		format++;
		count++;
	}
	va_end(args);
	return (count);
}
