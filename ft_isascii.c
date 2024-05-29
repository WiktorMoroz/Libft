/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:58:50 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 13:58:52 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
// #include <ctype.h>
// #include <stdio.h>
// int main()
// {
// printf("%d\n", ft_isascii(2));
// printf("%d\n", ft_isascii(65));
// printf("%d\n", ft_isascii('\n'));
// printf("%d\n", ft_isascii(' '));
// printf("%d\n", ft_isascii(-123871283));
// printf("%d\n", ft_isascii(23423423));
//
// printf("\n");
//
// printf("%d\n", isascii(2));
// printf("%d\n", isascii(65));
// printf("%d\n", isascii('\n'));
// printf("%d\n", isascii(' '));
// printf("%d\n", isascii(-123871283));
// printf("%d\n", isascii(23423423));
//
// return (0);
// }
//
