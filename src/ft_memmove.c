/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:43:06 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/27 15:49:51 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// memmove:
//      used to copy a block of memory from a location to another.
//      - different to memcpy as memmove copies to immediate buffer first.
// 	- memcpy leads to problems where strings overlap.

#include <stddef.h>

static void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	to = (unsigned char *) dest_str;
	from = (unsigned char *) src_str;
	i = 0;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}

void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes)
{
	unsigned char	*buf;

	buf = (unsigned char *) dest_str;
	ft_memcpy(buf, src_str, numBytes);
	ft_memcpy(dest_str, buf, numBytes);
	return (dest_str);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	cpy1[100] = "Geeks";
	char	cpy2[100] = "Geeks";
	char	str[8] = "Quiz";
	
	printf("BEFORE:\nOG: %s\t| FT: %s\n\n", cpy1, cpy2);
	memmove(cpy1, str, sizeof(str));
	ft_memmove(cpy2, str, sizeof(str));
	printf("AFTER :\nOG: %s\t| FT: %s\n\n", cpy1, cpy2);
	printf("Memory (0 if equal): %d\n", memcmp(cpy1, cpy2, sizeof(cpy1)));
	return (0);
}*/
