/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:03:52 by vmistry           #+#    #+#             */
/*   Updated: 2025/11/04 16:07:26 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;

	num = ft_itoa(n);
	if (!n)
		return ;
	write(fd, num, ft_strlen(num));
}
/*
int	main(void)
{
	ft_putnbr_fd(728, 1);
	return (0);
}*/