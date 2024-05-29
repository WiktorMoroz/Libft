/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:01:52 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:01:53 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

// Funkcja tworzy nowy napis, który jest fragmentem 
//istniejącego napisu s,
// zaczynającym się od indeksu start i mającym określoną długość len.
/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *original = "Hello, World!";
    unsigned int start = 7;
    size_t length = 5;

    char *substring = ft_substr(original, start, length);

    if (substring)
    {
        printf("Original: %s\n", original);
        printf("Substring: %s\n", substring);

        // Zwolnienie zaalokowanej pamięci dla substring.
        free(substring);
    }
    else
    {
        printf("Allocation error\n");
    }

    return 0;
}*/