/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:13:08 by mamarin-          #+#    #+#             */
/*   Updated: 2024/06/26 18:22:26 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	ok;
	int	i;

	ok = 1;
	i = 0;
	while ((ok == 1) && (str[i] != '\0'))
	{
		ok = 0;
		if (str[i] >= 'a' && str[i] < 'z')
		{
			ok = 1;
		}
		i++;
	}
	return (ok);
}
