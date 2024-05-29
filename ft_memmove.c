/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:50 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:11:49 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*d;

	d = dest;
	if ((!dest && !src) || (dest == src))
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (d);
}

// Jeśli obszar docelowy znajduje się przed obszarem źródłowym,kopiujemy wst
/*#include <stdio.h>
int main(void)
{
    char buffer[] = "Hello, World!";

    size_t size = sizeof(buffer);

    char destination[20];

    void *result = ft_memmove(destination, buffer, size);

    printf("Copied string: %s\n", (char *)result);

    return 0;
}*/