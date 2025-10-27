/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:48:56 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/27 17:08:45 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strdup:
// 	duplicates a string and returns a pointer to the duplicated string. 
// 	- duplicated string is a null-terminated byte string

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s) + 1;
	s2 = malloc(len);
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}
/*
int	main(void)
{
	const char *s1 = "String";
	char *sOG = strdup(s1);
	char *sFT = ft_strdup(s1);
	printf("OG -> %d\n", strcmp(s1, sOG) == 0);
	printf("FT -> %d\n", strcmp(s1, sFT) == 0);
	free(sOG);
	free(sFT);
	return (0);
}*/