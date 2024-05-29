/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:01:42 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:01:43 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (check_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (check_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(size * sizeof(char) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s1, size + 1);
	return (new);
}

//Zwraca nowy napis po przycięciu lub NULL w przypadku błędu alokacji pamięci.
/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s1 = "   Hello, World!   ";
    const char *set = " ";

    char *result = ft_strtrim(s1, set);

    if (result)
    {
        printf("Oryginalny ciąg: \"%s\"\n", s1);
        printf("Ciąg po przycięciu: \"%s\"\n", result);
        free(result); // Pamiętaj o zwolnieniu przydzielonej pamięci
    }
    else
    {
        printf("Błąd alokacji pamięci lub błędny argument.\n");
    }

    return 0;
}
*/
