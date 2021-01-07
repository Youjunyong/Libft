/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 14:31:48 by juyou             #+#    #+#             */
/*   Updated: 2021/01/05 12:38:27 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int idx;

	idx = ft_strlen(s);
	while (idx >= 0)
	{
		if (s[idx] == c)
			return ((char *)&s[idx]);
		idx--;
	}
	return (NULL);
}
