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

# include "ft_libft/libft.h"

int main()
{
    while (1)
    {
        ft_printf("imprime: %d\n", getpid());
        ft_printf("compila?");
        sleep(1);
    }
}