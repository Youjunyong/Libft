/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:34:00 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:29:11 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' ||
			c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int		idx;
	long	sign;
	long	num;

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
	while ((str[idx] != '\0') && ('0' <= str[idx]) && (str[idx] <= '9'))
	{
		num = (num * 10) + (str[idx] - '0');
		if (num > 2147483647 && sign == 1)
			return (-1);
		if (num > 2147483648 && sign == -1)
			return (0);
		idx++;
	}
	return (num * sign);
}
