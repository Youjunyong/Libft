/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:23:47 by juyou             #+#    #+#             */
/*   Updated: 2020/12/28 15:39:49 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *ptr, int size)
{
	unsigned char *uptr;

	uptr = (unsigned char *)ptr;
	while (size-- > 0)
		*uptr++ = 0;
	return (ptr);
}
