/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:59:03 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:59:04 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
// #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint(' '));
	return (0);
}
*/
