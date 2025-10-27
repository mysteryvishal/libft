/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:23:54 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/22 16:35:04 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[][5] = {"R2D2", "C3PO", "R2A6"};
	int n;
	printf("Looking for R2 astromech droids...\n");
	for (n = 0; n < 3; n++)
		if (ft_strncmp(str[n], "R2xx", 2) == 0)
		{
			printf("found %s\n", str[n]);
		}
	return 0;
}
*/
