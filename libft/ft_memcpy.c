/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 23:53:13 by mamarin-          #+#    #+#             */
/*   Updated: 2024/09/24 11:48:43 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memcpy(char *dest, char *src, int num)
{
	int		i;
	char	*aux;

	aux = dest;
	i = 0;
	if (dest == NULL || src == NULL || num < 0)
	{
		return (aux);
	}
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (aux);
}
