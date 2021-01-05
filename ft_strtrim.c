/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 17:10:52 by juyou             #+#    #+#             */
/*   Updated: 2021/01/05 12:22:59 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char        *ft_strtrim(char const *s1, char const *set)
{
    size_t    start;
    size_t    end;
    char    *res;

    if (!s1)
        return (NULL);
    if (!set)
        return (ft_strdup(s1)); 
		// 만약 set이 공백이라면, 문자열 그대로 리턴
    start = 0; // 문자열 시작 인덱스
    end = ft_strlen(s1); // 문자열 마지막 인덱스
    while (s1[start] && ft_strchr(set, s1[start]))
	{
        start++;
		printf("(start : %s)", ft_strchr(set, s1[start]));//test
	}
	printf("\n");
    while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
    {
		printf("(end : %s)", ft_strchr(set, s1[end -1]));//test
        if (end - 1 < 1)
            break ;
        end--;
    }
    if (start > end)
        return (ft_strdup(""));
    if (!(res = (char *)malloc(sizeof(char) * (end - start + 1))))
        return (NULL);
    ft_strlcpy(res, s1 + start, end - start + 1);
    return (res);
}