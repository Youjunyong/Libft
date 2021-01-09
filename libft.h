/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juyou <juyou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:54:15 by juyou             #+#    #+#             */
/*   Updated: 2021/01/09 19:28:00 by juyou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

//part1
int		ft_strlen(const char *str);
void	*ft_memset(void *b, int c, int len);
void	*ft_bzero(void *ptr, int size);
void	*ft_memcpy(void *dst, const void *src, int size);
int		ft_isalpha(char c);
void	*ft_memccpy(void *dst, const void *src, int c, int n);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isspace(char c);
int		ft_atoi(const char *str);
int		ft_strlcpy(char *dst, const char *src, int dstsize);
int		ft_strlcat(char *dst, const char *src, int size);
char 	*ft_strchr(const char *str, int c);
void 	*ft_calloc(int count, int size);
int		ft_isascii(char c);
int		ft_isprint(char c);
int 	ft_toupper(int c);
int 	ft_tolower(int c);
char	*ft_strnstr(const char *haystack, const char *needle, int len);
void	*ft_memchr(const void *s, int c, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
void	*ft_memmove(void *dst, const void *src, unsigned int len);
char 	*ft_strdup(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, int n);
char	*ft_strrchr(const char *s, int c);


// //part2
char 	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strtrim(char const *s1, char const *set);

char 	**ft_split(char const *s, char c);

void 	ft_putchar_fd(char c, int fd);
void 	ft_putstr_fd(char *s, int fd);
void 	ft_putendl_fd(char *s, int fd);
void 	ft_putnbr_fd(int n, int fd);
char 	*ft_itoa(int n);

#endif