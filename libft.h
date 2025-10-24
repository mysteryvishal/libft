/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:21:46 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/24 05:42:04 by vmistry          ###   ########.fr       */
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
// memset
// bzero
// memcpy
// memmove
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	ft_toupper(char c);
char	ft_tolower(char c);
// strchr
// strrchr
int	ft_strncmp(char *s1, char *s2, unsigned int n);
// memchr
// memcmp
char	*ft_strnstr(char *big, char *little, int len);
int	ft_atoi(const char *str)
// calloc
// strdup

#endif
