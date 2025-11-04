/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:48:06 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/04 16:30:45 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strtrim:
// 	Allocates memory and returns copy of 's1' with the characters
// 	in 'set' removed from the beginning and the end of the string.
// 	- Returns NULL if the allocation fails.

#include "libft.h"

static int	ft_isin(const char ch, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (ch == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimed_str;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (*s1 == '\0')
		return (NULL);
	while (ft_isin(s1[start], set) && ft_isin(s1[start + 1], set))
		start++;
	while (ft_isin(s1[end], set) && ft_isin(s1[end - 1], set))
		end--;
	trimed_str = (char *)malloc((end - ++start + 1));
	if (!trimed_str)
		return (0);
	ft_strlcpy(trimed_str, &s1[start], (end - start + 1));
	return ((char *)trimed_str);
}

// testing
/*
#include <stdio.h>
int	main(void)
{
	const char	*s1 = "  \t\n Hello, World! \n\t  ";
	const char	*set = " \n\t";
	char	*result = ft_strtrim(s1, set);

	printf("Result processed: '%s'\n", result);
	if (result)
	{
		printf("Original: '%s'\n", s1);
		printf("Trimmed: '%s'\n", result);
		free(result);
	}
	return (0);
}*/