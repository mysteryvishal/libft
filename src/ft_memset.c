/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:43:08 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/24 06:54:50 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char ch;
	unsigned char *string;
	int i;

	i = 0;
	ch = (unsigned char) c;
	string = (unsigned char *) str;
	while (string[i] != '\0')
	{
		string[i] = ch;
		i++;
	}
	return (string);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char str1[50];
	char str2[50];

	strcpy(str1, "Welcome to Tutorialspoint");
	puts(str1);

	memset(str1, '#', 7);
	puts(str1);

	strcpy(str2, "Welcome to Tutorialspoint");
	puts(str2);

	memset(str2, '#', 7);
	puts(str2);
	return (0);
}
