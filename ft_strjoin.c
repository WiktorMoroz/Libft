/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:57:44 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:57:47 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

// Funkcja łączy dwa napisy, alokując pamięć na nowy napis,
// który zawiera oba napisy połączone

/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *s1 = "Hello, ";
    const char *s2 = "World!";

    char *result = ft_strjoin(s1, s2);

    if (result)
    {
        printf("Połączony ciąg: %s\n", result);

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
