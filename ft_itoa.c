/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:12 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:59:14 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	while (n)
	{
		n /= 10;
		if (n)
			i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	long int	num;
	size_t		digits;

	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}

// Wywołanie funkcji get_digits do obliczenia liczby cyfr.
//Jeśli liczba jest ujemna, zmieniamy znak i zwiększamy liczbę cyfr.

/*#include "libft.h"
#include <stdio.h>

int main(void)
{
    int num1 = 12345;
    int num2 = -6789;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);

    if (str1 && str2)
    {
        printf("Number: %d, String: %s\n", num1, str1);
        print
*/
