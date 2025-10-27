/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:15:58 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/27 18:36:09 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int	i;
	int	j;

	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			if (little[j] == '\0')
				return (&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	find[] = "body";
	char	test1[] = "example body to search through";
	// char	test2[] = "example";
	// char	test3[] = "";

	printf("test1: %s\nfound: %s\n", test1, ft_strnstr(test1, find, 20));
	return (0);
}*/
