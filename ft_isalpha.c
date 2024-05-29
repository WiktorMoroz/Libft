/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:58:43 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:58:46 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	for (char i = 'a'; i < 'z'; i++)
	{
		printf("%d", ft_isalpha(i));
	}
	printf("%d", ft_isalpha(1));
	printf("%d", ft_isalpha(333333331));
	printf("%d", ft_isalpha(3));
	printf("%d", ft_isalpha(0));
	printf("%d", ft_isalpha(-1));
	printf("%d", ft_isalpha(23723772));
	printf("%d", ft_isalpha('-'));
	printf("%d", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", isalpha('q'));
	printf("%d\n", isalpha('Q'));
	return (0);
}
*/
