/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamarin- <mamarin-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:11:49 by mamarin-          #+#    #+#             */
/*   Updated: 2024/09/24 11:02:47 by mamarin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(char *str, int num);
int		ft_isalnum(int num);
int		ft_isalpha(int num);
int		ft_isascii(int num);
int		ft_isdigit(int num);
int		ft_isprint(int num);
int		ft_strlen(const char *str);
char	*ft_memcpy(char *dest, char *src, int num);
char	*ft_memmove(char *dest, char *src, int num);
char	*ft_memset(char *str, int c, int num);

#endif
