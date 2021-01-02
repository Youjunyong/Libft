/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 18:52:37 by juyou             #+#    #+#             */
/*   Updated: 2020/12/30 19:03:56 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char *us;
	unsigned int idx;

	us = (unsigned char *)s;
	idx = 0;
	while(idx < n)
	{
		if (*us == (unsigned char)c)
			return (us);
		us++;
		idx++;
	}
	return (NULL);
}
