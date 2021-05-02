/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 22:49:53 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:14:44 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned int	i;
	unsigned char	*udst;
	unsigned char	*usrc;

	if (dst == src || len == 0)
		return (dst);
	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	if (usrc < udst)
		while (len-- > 0)
			udst[len] = usrc[len];
	else
		while (i < len)
		{
			udst[i] = usrc[i];
			i++;
		}
	return (udst);
}
