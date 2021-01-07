/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 13:54:56 by juyou             #+#    #+#             */
/*   Updated: 2021/01/07 16:48:20 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	ft_putendl_fd(char *s, int fd)
{
	if (s)
		ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// void	ft_putendl_fd(char *s, int fd)
// {
// 	int		i;

// 	i = 0;
// 	if (s)
// 		while (s[i])
// 			write(fd, &s[i++], 1);
// 	write(fd, "\n", 1);
// }