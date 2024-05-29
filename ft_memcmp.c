/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:23 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:59:24 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello, World!";
	size_t n = 13;  // Length of the strings

	int result = ft_memcmp(str1, str2, n);

	if (result == 0)
	{
		printf("Strings are equal.\n");
	}
	else
	{
		printf("Strings are not equal. Difference at index %ld.\n",
			(size_t)result);
	}

	return (0);
}*/
