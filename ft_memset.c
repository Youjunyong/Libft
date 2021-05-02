/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:15:01 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:15:50 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memset(void *ptr, int c, int len)
{
	unsigned char *uptr;

	uptr = (unsigned char *)ptr;
	while (len-- > 0)
		*uptr++ = (unsigned char)c;
	return (ptr);
}
