/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 01:39:05 by juyou             #+#    #+#             */
/*   Updated: 2021/01/02 01:55:57 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *ptr;
	int len;
	int idx;

	idx = 0;
	len = ft_strlen(s1);
	if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);

	while (idx < len)
	{
		*ptr++ = *s1++;
		idx++;
	}
	*ptr = '\0';
	return (ptr-idx);
}

