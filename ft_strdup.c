/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:00:40 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:30:35 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s1)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

//Zwraca wskaźnik do nowego napisu lub NULL w przypadku błędu alokacji pamięci.

/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *original = "Hello, World!";
    char *duplicate = ft_strdup(original);

    if (duplicate)
        printf("Oryginalny: %s\nDuplikat: %s\n", original, duplicate);
    else
        printf("Błąd alokacji pamięci\n");

    // Zwolnij pamięć po duplikacie, gdy już nie jest potrzebny
    free(duplicate);

    return 0;
}
*/
