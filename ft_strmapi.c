/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:01:22 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:01:23 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!(ptr))
		return (NULL);
	while (i < ft_strlen(s))
	{
		ptr[i] = (*f)(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*#include "libft.h"
#include <stdio.h>

// Przykładowa funkcja modyfikująca znaki w ciągu
char modify_char(unsigned int index, char c)
{
    // Dodajmy 1 do wartości ASCII każdego znaku na nieparzystej pozycji
    if (index % 2 == 1)
        return c + 1;
    else
        return c;
}

int main(void)
{
    const char *input = "Hello, World!";

    // Utwórz nowy ciąg znaków z modyfikowanymi znakami
    char *result = ft_strmapi(input, &modify_char);

    if (result)
    {
        printf("Oryginalny ciąg: %s\n", input);
        printf("Zmodyfikowany ciąg: %s\n", result);

        // Zwolnienie zaalokowanej pamięci
        free(result);
    }
    else
    {
        printf("Błąd alokacji pamięci.\n");
    }

    return 0;
}
*/
