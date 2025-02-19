/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 17:25:33 by mamarin-          #+#    #+#             */
/*   Updated: 2025/02/18 13:59:04 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	print_char(char c);
int	print_string(char *s);
int	print_decimal(int num);
#endif
