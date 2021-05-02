/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 16:28:10 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:27:10 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	idx;
	char			*us;

	idx = 0;
	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (!(us = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (idx < len)
	{
		us[idx] = s[start + idx];
		idx++;
	}
	us[idx] = '\0';
	return (us);
}
