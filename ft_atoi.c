/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:58:02 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:08:13 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <assert.h>
#include <stdio.h>*/

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	int				sign;
	int				res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * res);
}

/*
void	test_ft_atoi(void)
{
	// Testy podstawowe
	assert(ft_atoi("-456") == -456);
	assert(ft_atoi("0") == 0);
	// Testy ze spacjami
	assert(ft_atoi(" 789") == 789);
	assert(ft_atoi(" \t\n\r\f\v-987") == -987);
	// Testy znaku plus
	assert(ft_atoi("+123") == 123);
	assert(ft_atoi("++456") == 0);
	// Testy graniczne
	assert(ft_atoi("2147483647") == 2147483647);
	// największa liczba całkowita w C
	assert(ft_atoi("-2147483648") == -2147483648);
	// najmniejsza liczba całkowita w C
	// Dodaj swoje testy tutaj
	printf("All tests passed!\n");
}

int	main(void)
{
	test_ft_atoi();
	return (0);
}*/
