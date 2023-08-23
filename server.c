/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:08:01 by laurmuss          #+#    #+#             */
/*   Updated: 2023/08/22 16:08:03 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft/libft.h"
#include <signal.h>

void receive_bit(int sign)
{
    static int  num_bit = 0;
    static char c = 0;

   

    if (sign == SIGUSR1)
        c = c | (128 >> num_bit);
    num_bit++;
    if (num_bit == 8)
    {
        ft_printf("%c", c);
        num_bit = 0;
        c = 0;
    }
}

int main()
{
    ft_printf("%d\n", getpid());
	signal(SIGUSR1, receive_bit);
	signal(SIGUSR2, receive_bit);
	while (1)
		pause();
	return (0);
}
