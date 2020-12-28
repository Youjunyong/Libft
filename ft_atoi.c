/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:34:00 by juyou             #+#    #+#             */
/*   Updated: 2020/12/28 16:34:43 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(const char c)
{
	if (c == '\v' || c == '\r' || c == '\t'
	|| c == '\f' || c == ' ' || c == '\n')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int idx;
	int sign;
	int num;

	idx = 0;
	sign = 1;
	num = 0;
	if (!str[idx])
		return (0);
	while (ft_isspace(str[idx]))
		idx += 1;
	if (str[idx] == '-' || str[idx] == '+')
		if (str[idx++] == '-')
			sign *= -1;
	while ('0' <= str[idx] && str[idx] <= '9')
		num = (num * 10) + (str[idx++] - '0');
	return (num * sign);
}
