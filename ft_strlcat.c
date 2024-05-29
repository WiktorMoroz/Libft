/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:00:54 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:00:55 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	dst_len = ft_strlen(dst);
	i = 0;
	while (src[i] && dst_len + 1 < size)
	{
		dst[dst_len++] = src[i++];
	}
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

// Zwraca łączną długość napisów (ilość znaków, które próbowaliśmy skopiować,
//niezależnie od ograniczenia size).
// Zwracamy łączną długość napisów (ilość znaków, które próbowaliśmy skopiować).
/*
#include <stdio.h>
int	main(void)
{
	char		dest[20] = "Hello";
	const char	*src = " World!";
	size_t		size;
	size_t		result;

	size = 20;
	printf("Before ft_strlcat: dest = \"%s\"\n", dest);
	result = ft_strlcat(dest, src, size);
	printf("After ft_strlcat: dest = \"%s\", result = %zu\n", dest, result);
	return (0);
}
*/
