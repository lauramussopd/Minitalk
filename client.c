/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:51:17 by laurmuss          #+#    #+#             */
/*   Updated: 2023/09/04 19:24:40 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft/libft.h"
#include <stdio.h>
#include <signal.h>

int	send_binary_str(char *str, int pidserv)
{
	int	num_bit;
	int	i;

	num_bit = 0;
	i = -1;
	while (str[++i])
	{
		while (num_bit < 8)
		{
			if (((str[i]) & (1 << num_bit)) == 0)
			{
				if (kill(pidserv, SIGUSR2))
					return (-1);
			}
			else
			{
				if (kill(pidserv, SIGUSR1))
					return (-1);
			}
			usleep(500);
			num_bit++;
		}
		num_bit = 0;
	}
	return (0);
}

int	send_binary_int(int i, int pidserv)
{
	int	num_bit;

	num_bit = 0;
	while (num_bit < 32)
	{
		if ((i & (1 << num_bit)) == 0)
		{
			if (kill(pidserv, SIGUSR2))
				return (-1);
		}
		else
		{
			if (kill(pidserv, SIGUSR1))
				return (-1);
		}
		usleep(500);
		num_bit++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	pidserv;

	if (argc != 3)
		return (-1);
	pidserv = ft_atoi(argv[1]);
	ft_printf("Pid:%d\n", pidserv);
	if (send_binary_int(ft_strlen(argv[2]), pidserv) == -1)
		return (1);
	if (send_binary_str(argv[2], pidserv) == -1)
		return (1);
}
