/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:58:18 by juyou             #+#    #+#             */
/*   Updated: 2021/01/07 13:46:59 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_str_cnt(const char *str, int c)
{
	int idx;
	int cnt;

	cnt = 0;
	idx = 0;
	while (str[idx])
	{
		if (str[idx] == (char)c)
			cnt++;
		idx++;
	}
	return (cnt);
}

static int	*serch_delimiter(const char *str, int c)
{
	int *delimiter;
	int idx;
	int jdx;
	
	jdx = 0;
	idx = 0;
	if(!(delimiter = (int *)malloc(sizeof(int) * get_str_cnt(str, c))))
		return (NULL);
	while (str[idx])
	{
		if (str[idx] == (char)c)
		{
			delimiter[jdx++] = idx;
			// printf("delimiter : %d\n",idx);
		}
		idx++;
	}
	return (delimiter);
}
static char *str_slicing(char const *str, int start, int end)
{
	char *ret;
	int idx;
	int jdx;

	ret = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
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
	int *delimiter;
	int start;
	int end;
	int num;
	int idx;
	
	idx = 0;
	num = get_str_cnt(s, c);
	delimiter = serch_delimiter(s, c);
	if (!s || !(tab = (char **)malloc(sizeof(char *) * (num + 1))))
		return (NULL);
	str_peice = str_slicing(s, 0, delimiter[0]-1);
	tab[0] = (char *)malloc(sizeof(char) * (delimiter[0] + 1));
	tab[0] = str_peice;
	// printf("first : (%s)\n",str_peice);
	while (idx < num )
	{
		// printf("idx:%d\n",idx);
		if (idx == num - 1)
		{
			str_peice = str_slicing(s, delimiter[idx] + 1, ft_strlen(s)+1);
			tab[idx+1] = (char *)malloc(sizeof(char) * (end - start));
			tab[idx+1] = str_peice;
			// printf("last : (%s)\n",str_peice);
			break;
		}
		start = delimiter[idx] + 1;
		end = delimiter[idx + 1] - 1;
		str_peice = str_slicing(s, start, end);
		// printf("in loop idx : %d ,(%d:%d) : %s\n",idx,start,end,str_peice);
		tab[idx+1] = (char *)malloc(sizeof(char) * (end - start));
		tab[idx+1] = str_peice;
		idx++;
	}
	tab[num] = NULL;
	return (tab);
}
