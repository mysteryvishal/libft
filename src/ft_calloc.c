/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:42:42 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/27 16:20:05 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calloc:
// 	allocates memory and returns a pointer to it
// 	- reserves a memory block for array of objects
// 	- initialises all bytes in the storage to 0
// 
// 	nitems: number of elements to be allocated
// 	size: size of each element

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

static void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *) dst;
	i = 0;
	while (i < n)
		dest[i++] = 0;
}

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	*arr;

	if (nitems == 0 || size == 0)
		return (0);
	arr = malloc (nitems * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, nitems);
	return (arr);
}
/*
int	main(void)
{
	int n = 5;
	int *array;

	// use calloc function to allocate the memory
	array = (int *)ft_calloc(n, sizeof(int));

	if (array == NULL)
	{
		printf("Memory allocation failed!\n");
		return 1;
	}

	// Display the array value
	printf("Array elements after calloc: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	// free the allocated memory
	free(array);
	return 0;
}*/