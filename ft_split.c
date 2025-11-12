/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 10:44:31 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/12 11:39:14 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// split:
// 	Allocates memory and returns an array of strings obtained by splitting
// 	the string ’s’ using the character ’c’ as a delimiter.
//	- The array must end with a NULL pointer.
//	- If the allocation fails, the function returns NULL.

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
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

static void	ft_freeall(char **res, size_t n)
{
	size_t	i;

	if (!res)
		return ;
	i = 0;
	while (i < n)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static int	ft_alloc_copy(char **res, size_t i, char const *s, size_t end)
{
	char	*substr;

	if (!s || end <= 0)
		return (1);
	substr = malloc(sizeof(char) * (end + 1));
	if (!substr)
	{
		ft_freeall(res, i);
		return (1);
	}
	ft_memcpy(substr, s, end);
	substr[end] = '\0';
	res[i] = substr;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	nsub;
	size_t	i;
	size_t	end;

	if (!s)
		return (NULL);
	nsub = ft_wordcount(s, c);
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
		if (ft_alloc_copy(res, i, s, end))
			return (NULL);
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
	char	str[] = "Hello;my;name;is";
	char	del = ';';
	printf("str: %s\ndel: %c\n", str, del);
	char **res = ft_split(str, del);
	if (res == NULL)
	{
		printf("failed: %s\n", *res);
		return (0);
	}
	for (size_t i = 0; i < ft_wordcount(str, del); i++)
		printf("out_%ld: %s\n", i, res[i]);
	return (0);
}*/