/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 16:45:19 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:21:45 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				**ft_malloc_error(char **tab)
{
	unsigned int		i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int		ft_get_strs_num(char const *s, char c)
{
	unsigned int		idx;
	unsigned int		cnt;

	cnt = 0;
	idx = 0;
	if (!s[0])
		return (0);
	while (s[idx] && s[idx] == c)
		idx++;
	while (s[idx])
	{
		if (s[idx] == c)
		{
			cnt += 1;
			while (s[idx] && s[idx] == c)
				idx++;
			continue;
		}
		idx++;
	}
	if (s[idx - 1] != c)
		cnt++;
	return (cnt);
}

static void				ft_get_next_str(char **next_str,
						unsigned int *next_str_len, char c)
{
	unsigned			idx;

	*next_str += *next_str_len;
	*next_str_len = 0;
	idx = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[idx])
	{
		if ((*next_str)[idx] == c)
			return ;
		(*next_str_len)++;
		idx++;
	}
}

char					**ft_split(char const *s, char c)
{
	char				**tab;
	char				*next_str;
	unsigned int		next_str_len;
	unsigned int		strs_num;
	unsigned int		idx;

	if (!s)
		return (NULL);
	strs_num = ft_get_strs_num(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (strs_num + 1))))
		return (NULL);
	idx = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (idx < strs_num)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		if (!(tab[idx] = (char *)malloc(sizeof(char) * (next_str_len + 1))))
			return (ft_malloc_error(tab));
		ft_strlcpy(tab[idx], next_str, next_str_len + 1);
		idx++;
	}
	tab[idx] = NULL;
	return (tab);
}
