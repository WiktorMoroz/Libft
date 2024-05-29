/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:58:57 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:58:59 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
#include <stdio.h>

int	main(void)
{
	for (char i = 0; i < 10; i++)
	{
		printf("%d", ft_isdigit(i));
	}
	printf("%d", ft_isdigit(1));
	printf("%d", ft_isdigit(333333331));
	printf("%d", ft_isdigit(3));
	printf("%d", ft_isdigit(0));
	printf("%d", ft_isdigit(-1));
	printf("%d", ft_isdigit(23723772));
	printf("%d", ft_isdigit('-'));
	printf("%d", ft_isdigit('A'));
	printf("%d", ft_isdigit('Z'));
	return (0);
}
*/
