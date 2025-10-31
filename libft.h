/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:21:46 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/30 16:07:21 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdlib.h>

// Part 1
int		ft_isalpha(int arg);
int		ft_isdigit(int arg);
int		ft_isalnum(int arg);
int		ft_isascii(int arg);
int		ft_isprint(int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_atoi(const char *str);
char	ft_toupper(char c);
char	ft_tolower(char c);
char	*ft_strchr(const char *str, int search_str);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, int len);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
void	*ft_strdup(const char *s);
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
void	*ft_memchr(const void *str, int c, size_t n);
void	ft_bzero(void *dst, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

// Part 2
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);


#endif
