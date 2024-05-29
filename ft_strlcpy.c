/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:01:00 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:01:07 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (i < size)
		dst[i] = 0;
	while (src[i])
		i++;
	return (i);
}

//zwraca ilosc znakow ktore chcielismy przekopiowac niezaleznie od size

/*
#include <stddef.h>
#include <stdio.h>
int	main(void)
{
	const char	*source = "Hello World! 232";
	size_t		result;

	char destination[20];  // Przykładowy bufor docelowy
	result = ft_strlcpy(destination, source, sizeof(destination));
	printf("Copied %zu characters. Resulting string: %s\n", result,
		destination);
	return (0);
}
*/
