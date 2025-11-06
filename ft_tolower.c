/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:05:20 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/06 22:31:26 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'A'
	printf("before: %s\n", c);
	printf("after : %s\n\n", ft_tolower(c));
	return (0);
}
*/
