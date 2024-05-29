/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:01:32 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:06:29 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

// Zwraca wskaźnik do pierwszego wystąpienia napisu needle w 
//haystack lub NULL, jeśli nie znaleziono

/*#include <stdio.h>


int	main(void) {
	const char *haystack = "To be, or not to be: that is the question.";
	const char *needle = "not";

	char *result = ft_strnstr(haystack, needle, 20);

	if (result) {
		printf("Znaleziono podciąg: %s\n", result);
	} else {
		printf("Podciąg nie został znaleziony.\n");
	}

	return (0);
}
*/
