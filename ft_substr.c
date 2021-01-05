/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 16:28:10 by juyou             #+#    #+#             */
/*   Updated: 2021/01/04 16:52:57 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int idx;
	char *us;
	
	idx = 0;
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

// *파라미터
// char const *s : substring
// unsigned int start :  서브스트링의 인덱스 시작은, 문자 's'
// size_t : 서브스트링의 최대길이

// return value : 서브스트링을 반환, 메모리 할당 실패시는 NULL반환

// malloc(3)을 이용해 할당하고, 서브스트링을 반환. (문자열 *s로부터)
// 서브스트링은 'start'부터 시작하고, 최대길이는 'len'이다.ㅁ
