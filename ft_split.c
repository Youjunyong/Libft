/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:45:19 by juyou             #+#    #+#             */
/*   Updated: 2021/01/08 17:09:48 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	get_strs_cnt(const char *str, int c)
{
	unsigned int idx;
	unsigned int cnt;
	int flag;

	cnt = 0;
	idx = 0;
	flag = 1;
	while (str[idx] && str[idx] == (char)c)
		idx++;
	while (str[idx])
	{
		if (str[idx] == (char)c)
			flag = 1;
		else
			if (flag == 1)
			{
				cnt++;
				flag = 0;
			}
		idx++;
	}
	return (cnt);
}

static int	*get_strs_index(const char *str, int c)
{
	int idx;
	int jdx;
	int flag;
	int *strs_index;
	
	if (!(strs_index = (int *)malloc(sizeof(int) * 2 * get_strs_cnt(str, c))))
		return (NULL);
	flag = 1;
	idx = 0;
	jdx = 0;
	while (str[idx] && str[idx] == (char)c)
		idx++;
	while (str[idx])
	{
		if (str[idx] != (char)c && flag == 1)
		{
			strs_index[jdx++] = idx;
			flag = 0;
		}
		else if (str[idx] == (char)c && flag == 0)
		{
			strs_index[jdx++] = idx - 1;
			flag = 1;
		}
		idx++;
	}
	strs_index[jdx] = ft_strlen(str) - 1;
	return (strs_index);
}
static char *str_slicing(char const *str, int start, int end)
{
	char *ret;
	int idx;
	int jdx;

	if (!(ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	jdx = 0;
	idx = 0;
	while (str[idx])
	{
		if (start <= idx && idx <= end)
			ret[jdx++] = str[idx];
		idx++;
	}
	ret[jdx] = '\0';
	return (ret);
}

char **ft_split(char const *s, char c)
{
	char **tab;
	char *str_peice;
	int *strs_index;
	int strs_cnt;
	int idx;
	int jdx;
	
	jdx = 0;
	idx = 0;
	if (!s)
		return (NULL);
	if (!c)
		return (NULL);
	strs_cnt = get_strs_cnt(s, c);
	strs_index = get_strs_index(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (strs_cnt + 1))))
		return (NULL);

	while (idx < strs_cnt)
	{
		str_peice = str_slicing(s, strs_index[jdx], strs_index[jdx + 1]);
		tab[idx] = (char *)malloc(sizeof(char) * ft_strlen(str_peice));
		tab[idx] = str_peice;
		jdx += 2;
		idx++;
	}

	tab[strs_cnt] = NULL;
	return (tab);
}
