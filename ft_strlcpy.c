/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 01:56:31 by juyou             #+#    #+#             */
/*   Updated: 2021/01/02 15:56:53 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int				idx;
	unsigned char	*udst;
	unsigned char	*usrc;

	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	idx = 0;
	while (idx < dstsize - 1 && *usrc && dstsize != 0)
	{
		*udst = *usrc;
		udst++;
		usrc++;
		idx++;
	}
	if (idx < dstsize && dstsize != 0)
	{
		*udst = '\0';
		idx++;
	}
	if (ft_strlen(src) > dstsize)
		return (ft_strlen(src));
	else
		return (ft_strlen(src));
}
