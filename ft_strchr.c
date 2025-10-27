/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmistry <vmistry@student.42london.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 05:43:10 by vmistry           #+#    #+#             */
/*   Updated: 2025/10/27 17:20:15 by vmistry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strchr:
// 	refers to the first occurance of a character from a string.
// 	- operates on NUL-terminated strings.
// 	- returns the first occurance of the character in the string.

#include "libft.h"

char	*ft_strchr(const char *str, int search_str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search_str)
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == (char) search_str)
		return ((char *) &str[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main() 
{
   const char *str = "Welcome to Tutorialspoint";
   char ch = 'u';
   // Find the first occurrence of 'u' in the string
   char *p = strchr(str, ch);

   if (p != NULL) 
   {
       printf("String starting from '%c' is: %s\n", ch, p);
   } 
   else 
   {
       printf("Character '%c' not found in the string.\n", ch);
   }
   return 0;
}*/
