/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:36:48 by mamarin-          #+#    #+#             */
/*   Updated: 2024/06/26 18:12:01 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	ok;
	int	i;

	ok = 1;
	i = 0;
	while ((ok == 1) && (str[i] != '\0'))
	{
		ok = 0;
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			ok = 1;
		}
		i++;
	}
	return (ok);
}