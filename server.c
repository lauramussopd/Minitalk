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
char    *message;

void receive_bit(int sign)
{
    static int  num_bit = 0;
    static char c = 0;
    static int  i = 0;
    static int  j = 0;

    if (num_bit < 32)
    {
        if (sign == SIGUSR1)
           i = i | (128 >> num_bit);
        num_bit++;
        if (num_bit == 32)
        {
            ft_printf("%d\n", i);
            message = ft_calloc(sizeof(char), i + 1);
        }
    }
    else
    {   
        if (sign == SIGUSR1)
            c = c | (128 >> num_bit);
        num_bit++;
        if (num_bit == 40)
        {
            message[j] = c;
            j++;
            num_bit = 32;
            c = 0;  
            if (j == i)
            {
                message[j] = '\0';
                j = 0;
                i = 0;
                num_bit = 0;
                ft_printf("%s\n",message);
            }
        }
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
