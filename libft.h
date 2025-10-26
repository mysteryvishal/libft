/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:21:46 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/25 00:29:51 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int	ft_isalpha(int arg);
int	ft_isdigit(int arg);
int	ft_isalnum(int arg);
int	ft_isascii(int arg);
int	ft_isprint(int c);
int	ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *dst, size_t n);
void	*ft_memcpy(void *dest_str, const void *src_str, size_t n);
void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	ft_toupper(char c);
char	ft_tolower(char c);
char	*ft_strrchr(const char *str, int c);
char    *ft_strchr(const char *str, int search_str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
// memchr
int	ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strnstr(char *big, char *little, int len);
int	ft_atoi(const char *str);
// calloc
// strdup

#endif
