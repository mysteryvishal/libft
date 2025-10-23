/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:21:46 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/23 12:39:28 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
#define LIBFT_H_

int	ft_isalpha(char c);
int	ft_isdigit(char c);
// isalnum
int	ft_isascii(int c);
int	ft_isprint(char c);
int	ft_strlen(char *str);
// memset
// bzero
// memcpy
// memmove
// strlcpy
// strlcat
char	ft_toupper(char c);
char	ft_tolower(char c);
// strchr
// strrchr
int	ft_strncmp(char *s1, char *s2, unsigned int n);
// memchr
// memcmp
char	*ft_strnstr(char *big, char *little, int len);
// atoi
// calloc
// strdup

#endif
