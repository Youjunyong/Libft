/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:24:31 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:25:11 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int	l_len;
	int	b_len;
	int	size;

	if (*needle == '\0')
		return ((char *)haystack);
	l_len = ft_strlen(needle);
	b_len = ft_strlen(haystack);
	if (b_len < l_len || len < l_len)
		return (0);
	size = b_len > len ? len : b_len;
	while (size-- >= l_len)
	{
		if (ft_memcmp(haystack, needle, l_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
