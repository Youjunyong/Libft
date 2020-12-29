/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:54:15 by juyou             #+#    #+#             */
/*   Updated: 2020/12/29 19:25:10 by juyou            ###   ########.fr       */
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
char 	*ft_strchr(const char *str, int c);
void 	*ft_calloc(int count, int size);
int		ft_isascii(char c);
int		ft_isprint(char c);
int 	ft_toupper(int c);
int 	ft_tolower(int c);
char	*ft_strnstr(const char *haystack, const char *needle, int len);
void 	*ft_memccpy(void *restrict dst, const void *restrict src, int c, int n);




#endif