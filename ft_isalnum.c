/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:58:37 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:10:50 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) || (c >= '0'
			&& c <= '9'));
}

/*#include <stdio.h>
int	main(void)
{
	for (char i = 'a'; i < 'z'; i++)
	{
		printf("%d", ft_isalnum(i));
	}
	printf("%d", ft_isalnum(1));
	printf("%d", ft_isalnum(333333331));
	printf("%d", ft_isalnum(3));
	printf("%d", ft_isalnum(0));
	printf("%d", ft_isalnum(-1));
	printf("%d", ft_isalnum(23723772));
	printf("%d", ft_isalnum('-'));
	printf("%d", ft_isalnum('A'));
	printf("%d", ft_isalnum('Z'));
	printf("\n");
	
	return (0);
}*/
