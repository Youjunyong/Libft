/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 16:56:35 by juyou             #+#    #+#             */
/*   Updated: 2021/01/07 17:45:41 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			num_len(int n)
{
	int		i;
	int		len;

	len = 1;
	i = n / 10;
	while (i != 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		number;
	int		sign;
	char	*nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number = n < 0 ? -1 * n : n;
	sign = n < 0 ? -1 : 1;
	len = sign == -1 ? 1 + num_len(number) : num_len(number);
	if (!(nb = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	nb[len--] = '\0';
	while (len >= 0)
	{
		if (sign == -1 && len == 0)
		{
			nb[len] = '-';
			break ;
		}
		nb[len] = (number % 10) + '0';
		number /= 10;
		len--;
	}
	return (nb);
}
