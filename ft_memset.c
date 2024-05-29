/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:55 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:59:56 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	char			*ptr;
	unsigned char	cc;

	i = 0;
	ptr = str;
	cc = c;
	while (n > 0)
	{
		ptr[i] = cc;
		i++;
		n--;
	}
	return (str);
}

/*#include <stdio.h>
#include <string.h>

int	main(void) {
	char buffer[10] = "Hello";

	memset(buffer, 65, sizeof(buffer));
	
	printf("Buffer po uzyciu memset: \"%s\"\n", buffer);

	return (0);
}*/