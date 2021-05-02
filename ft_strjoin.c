/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 17:14:43 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:23:56 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char *s1, char *s2)
{
	char	*strjoin;
	int		s1_len;
	int		s2_len;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) || !(s2))
		return (!(s1) ? ft_strdup(s2) : ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(strjoin = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	ft_strlcpy(strjoin, s1, s1_len + 1);
	ft_strlcat(strjoin + (s1_len), s2, s2_len + 1);
	return (strjoin);
}
