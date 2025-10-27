/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:02:26 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/22 16:40:14 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'a'
	printf("before: %s\n", c);
	printf("after : %s\n\n", ft_toupper(c));
	return (0);
}
*/
