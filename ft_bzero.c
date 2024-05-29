/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:58:10 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:58:13 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stddef.h>
#include <stdio.h>*/

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}
/*
int	main(void)
{
	char	buffer[10] = "Hello!";

	// Wydruk zawartości bufora przed użyciem bzero
	printf("Before bzero: \"%s\"\n", buffer);
	// Wyzeruj bufor przy użyciu bzero
	ft_bzero(buffer, sizeof(buffer));
	// Wydruk zawartości bufora po użyciu bzero
	printf("After bzero: \"%s\"\n", buffer);
	return (0);
}
*/
