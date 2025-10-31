/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:40:25 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/31 15:12:41 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// split:
// 	Allocates memory and returns an array of strings obtained by splitting
// 	the string ’s’ using the character ’c’ as a delimiter.
//	- The array must end with a NULL pointer.
//	- If the allocation fails, the function returns NULL.

#include "libft.h"

// numsub = number of substrings
static size_t	ft_numsub(const char *s, char c)
{
	size_t	count;
	int		in_sub;

	count = 0;
	in_sub = 0;
	while (s && *s)
	{
		if (*s != c && in_sub == 0)
		{
			in_sub = 1;
			count++;
		}
		else if (*s == c)
			in_sub = 0;
		s++;
	}
	return (count);
}

// allocate and copy substring to result array
static char	*alloc_and_copy(const char *s, size_t start, size_t end)
{
	char	*res;

	if (!s || start >= end)
		return (NULL);
	res = malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (NULL);
	ft_memcpy(res, s + start, end - start);
	res[end - start] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	end;
	size_t	nsub;
	size_t	i;
	char	**res;

	if (!s)
		return (NULL);
	nsub = ft_numsub(s, c);
	res = malloc(sizeof(char *) * (nsub + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < nsub)
	{
		while (s && *s == c)
			s++;
		end = 0;
		while (s && s[end] && s[end] != c)
			end++;
		res[i] = alloc_and_copy(s, 0, end);
		s += end;
		i++;
	}
	res[nsub] = NULL;
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "Hello;World!;42;;";
	char	c = ';';
	char	**res = ft_split(str, c);
	int	num_substrings = ft_numsub(str, c) + 1;
	
	for (int i = 0; i < num_substrings; i++)
	{
		printf("res[%d]: %s\n", i, res[i]);
		free(res[i]);
	}
	free(res);
	return (0);
}*/