/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 17:14:43 by juyou             #+#    #+#             */
/*   Updated: 2021/01/04 17:09:35 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	char *strjoin;
	int len;
	int idx;
	int jdx;

	len = ft_strlen(s1) + ft_strlen(s2);
	idx = 0;
	jdx = 0;
	if (!(strjoin = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s1[idx])
	{
		strjoin[idx] = s1[idx];
		idx++;
	}
	while (s2[jdx])
	{
		strjoin[idx+jdx] = s2[jdx];
		jdx++;
	}
	strjoin[idx+jdx] = '\0';
	return (strjoin);
}
