/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 19:04:27 by juyou             #+#    #+#             */
/*   Updated: 2021/01/01 22:46:07 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned char *us1;
	unsigned char *us2;
	unsigned int idx;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;

	idx = 0;
	while (idx < n)
	{
		if (*us1 != *us2)
			return ((int)*us1 - (int)*us2);
		idx++;
		us1++;
		us2++;
	}
	return (0);
}