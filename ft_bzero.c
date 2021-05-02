/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:23:47 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:00:55 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, size_t size)
{
	unsigned char *uptr;

	uptr = (unsigned char *)ptr;
	while (size-- > 0)
		*uptr++ = 0;
	return (ptr);
}
