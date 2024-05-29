/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:00:32 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:10:08 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

// Zwraca wskaźnik do pierwszego wystąpienia znaku w napisie lub NULL,
// jeśli znak nie został znaleziony.

/*
#include <stdio.h>

int main(void)
{
    const char *str1 = "Hello, World!";
    char c1 = 'o';
    char *result1 = ft_strchr(str1, c1);

    if (result1)
        printf("Znaleziono'%c' w \"%s\" na: %ld\n", c1, str1, result1 - str1);
    else
        printf("Nie znaleziono znaku '%c' w \"%s\"\n", c1, str1);

    printf("\n");

    const char *str2 = "Testing";
    char c2 = 'z';
    char *result2 = ft_strchr(str2, c2);

    if (result2)
        printf("Znaleziono '%c' w \"%s\" na: %ld\n", c2, str2, result2 - str2);
    else
        printf("Nie znaleziono znaku '%c' w \"%s\"\n", c2, str2);

    return 0;
}
*/
