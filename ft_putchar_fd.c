/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:00:00 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:00:01 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include "libft.h"
#include <unistd.h>

int main(void)
{
    char character = 'A';  // Przykładowy znak
    int file_descriptor = 1;  // 1 oznacza standardowe wyjście (stdout)

    ft_putchar_fd(character, file_descriptor);

    return 0;
}
*/
