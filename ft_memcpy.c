/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:43:31 by juyou             #+#    #+#             */
/*   Updated: 2021/01/02 15:49:53 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, int size)
{
	unsigned char *udst;
	unsigned char *usrc;

	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	while (size-- > 0)
		*udst++ = *usrc++;
	return (dst);
}
