/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:25:48 by mamarin-          #+#    #+#             */
/*   Updated: 2025/02/19 08:47:10 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

static int	printf_type(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == 'c')
		count += print_char(va_arg(args, int));
	else if (*format == 's')
		count += print_string(va_arg(args, char *));
	// else if (*format == 'p')
	//	count += print_pointer(va_arg(args, void *));
	else if (*format == 'd')
		count += print_decimal(va_arg(args, int));
	else if (*format == '%')
		count += print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (ft_strchr("cspdiuxX%", *(format + 1)) && *format == '%')
		{
			count += printf_type(format + 1, args);
			format = format + 2;
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

//int	main (void)
//{
//	int	count;
//
//	count = ft_printf("Hola%cAD%cIOS%c", 'a', 'i', '\n');
//	printf("%d\n", count);
//	count = ft_printf("Probando_string: %s", "string1");
//	printf("\ncontador: %d\n", count);
//	count = ft_printf("%d%c", 12345, '\n');
//	printf("contador: %d\n", count);
//}
