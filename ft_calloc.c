/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:58:31 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:58:33 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

/*#include <stdio.h>

int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int);

    int *arr = ft_calloc(count, size);

    if (arr)
    {
        for (size_t i = 0; i < count; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        free(arr);
    }
    else
    {
        printf("Allocation failed.\n");
    }

    return 0;
}
*/
