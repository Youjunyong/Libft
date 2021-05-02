/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 22:59:41 by juyou             #+#    #+#             */
/*   Updated: 2021/03/04 19:02:28 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	if (!(ptr = (int *)malloc(size * count)))
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
