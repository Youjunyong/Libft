/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 18:24:31 by juyou             #+#    #+#             */
/*   Updated: 2020/12/29 19:23:43 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int idx;
	int jdx;

	idx = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (idx < len && haystack[idx])
	{
		jdx = 0;
		if (haystack[idx + jdx] == needle[jdx])
			while (haystack[idx + jdx] && needle[jdx])
			{
				jdx++;
				if (haystack[idx + jdx] != needle[jdx] && !needle[jdx])
					return ((char *)&haystack[idx]);
				else if (haystack[idx + jdx] != needle[jdx] || len <= jdx + idx)
					break ;
			}
		idx++;
	}
	return (NULL);
}
