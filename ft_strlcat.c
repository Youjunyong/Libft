/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:36:44 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:24:08 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dst);
	len = (len < size) ? len : size;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len += 1;
	}
	if (i < size)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
