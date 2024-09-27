/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:20:42 by mamarin-          #+#    #+#             */
/*   Updated: 2024/09/24 11:11:49 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memset(char *str, int c, int num)
{
	char	*aux;

	aux = str;
	while (num > 0)
	{
		*str = c;
		str++;
		num--;
	}
	return (aux);
}
