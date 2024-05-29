/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:44 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:59:45 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	// Test 1: Kopiowanie normalne
	char src1[] = "Hello, World!";
	char dest1[20];
	ft_memcpy(dest1, src1, strlen(src1) + 1);
	printf("Test 1: %s\n", dest1);

	// Test 2: Kopiowanie, gdy dest jest za krótkie
	char src2[] = "123456789";
	char dest2[5];
	ft_memcpy(dest2, src2, strlen(src2) + 1);
	printf("Test 2: %s\n", dest2);

	// Test 3: Kopiowanie, gdy dest jest dokładnie takie samo jak src
	char src3[] = "Hello";
	char dest3[] = "Hello";
	ft_memcpy(dest3, src3, strlen(src3) + 1);
	printf("Test 3: %s\n", dest3);

	// Test 4: Kopiowanie, gdy dest i src są NULL
	char *src4 = NULL;
	char *dest4 = NULL;
	if (ft_memcpy(dest4, src4, 0) == NULL)
		printf("Test 4: Passed (NULL pointers)\n");
	else
		printf("Test 4: Failed\n");

	return (0);
}*/
