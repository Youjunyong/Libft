/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:54:15 by juyou             #+#    #+#             */
/*   Updated: 2020/12/28 22:44:14 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

//part1
int		ft_strlen(const char *str);
void	*ft_memset(void *b, int c, int len);
void	*ft_bzero(void *ptr, int size);
void	*ft_memcpy(void *dst, const void *src, int size);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isspace(char c);
int		ft_atoi(const char *str);
int		ft_strlcat(char *dst, const char *src, int size);
// char	*ft_strchr(const char *s, int c);
char 	*ft_strchr(const char *str, int c);


#endif