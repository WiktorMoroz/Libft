/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:01:36 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:01:37 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char const	*new;

	new = NULL;
	while (*str)
	{
		if (*str == (char)c)
			new = str;
		str++;
	}
	if (*str == (char)c)
		new = str;
	return ((char *)new);
}

// Zwraca wskaźnik do ostatniego wystąpienia znaku c w napisie str lub NULL,
// jeśli znak nie występuje.
/*
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, Wodffdrld!";
    int target_char = 'o';

    char *result = ft_strrchr(str, target_char);

    if (result)
    {
        printf("Znaleziono ostatnie wystąpienie '%c' w ciągu:\n", target_char);
        printf("Oryginalny ciąg: %s\n", str);
        printf("Ostatnie wystąpienie: %s\n", result);
    }
    else
    {
        printf("Nie znaleziono znaku '%c' w ciągu.\n", target_char);
    }

    return 0;
}*/
