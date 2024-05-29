/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:18 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:11:15 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;
	size_t			i;

	str = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int main(void)
{
    char buffer[] = "Hello, World!";

    char search_char = 'W';

    size_t size = sizeof(buffer);

    void *result = ft_memchr(buffer, search_char, size);

    if (result != NULL)
    {
        printf("Character '%c' found at index: %ld\n", search_char, 
        ((unsigned char *)result - (unsigned char *)buffer));
    }
    else
    {
        printf("Character '%c' not found.\n", search_char);
    }

    return 0;
}*/
