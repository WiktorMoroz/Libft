/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:00:45 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:00:46 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

//Funkcja przekształca każdy znak napisu przy użyciu funkcji f,
// przyjmującej indeks i wskaźnik do znaku
/*#include "libft.h"
#include <stdio.h>

// Przykładowa funkcja, która zwiększa każdy znak o 1
void increment_char(unsigned int index, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = (*c - 'a' + 1) % 26 + 'a';
    else if (*c >= 'A' && *c <= 'Z')
        *c = (*c - 'A' + 1) % 26 + 'A';
}

int main(void)
{
    char str[] = "Hello, World!";
    
    printf("Oryginalny ciąg przed modyfikacją: %s\n", str);

    // Wywołanie ft_striteri z funkcją increment_char
    ft_striteri(str, increment_char);

    printf("Ciąg po modyfikacji: %s\n", str);

    return 0;
}
*/
