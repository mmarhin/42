/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 01:10:03 by mamarin-          #+#    #+#             */
/*   Updated: 2024/09/24 10:20:50 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(char *dst, char *src, int num)
{
	char	*aux;
	char	temp[1000];
	int		i;

	i = 0;
	while (i < num)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < num)
	{
		dst[i] = temp[i];
		i++;
	}
	aux = dst;
	return (aux);
}
