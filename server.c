/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:08:01 by laurmuss          #+#    #+#             */
/*   Updated: 2023/09/03 16:12:28 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft/libft.h"
#include <signal.h>

char	*g_message;

void	receive_msg(int sign, int *i, int *num_bit)
{
	static char	c = 0;
	static int	j = 0;
	static int	char_bit = 0;

	if (sign == SIGUSR1)
		c = c | (1 << char_bit);
	char_bit++;
	if (char_bit == 8)
	{
		g_message[j] = c;
		j++;
		char_bit = 0;
		c = 0;
		if (j == *i)
		{
			g_message[j] = '\0';
			j = 0;
			*i = 0;
			char_bit = 0;
			*num_bit = 0;
			ft_printf("%s\n", g_message);
			free(g_message);
		}
	}
}

void	receive_bit(int sign)
{
	static int	i = 0;
	static int	num_bit = 0;

	if (num_bit < 32)
	{
		if (sign == SIGUSR1)
			i = i | (1 << num_bit);
		num_bit++;
		if (num_bit == 32)
		{
			ft_printf("%d\n", i);
			g_message = ft_calloc(sizeof(char), i + 1);
		}
	}
	else
	{
		receive_msg(sign, &i, &num_bit);
	}
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	signal(SIGUSR1, receive_bit);
	signal(SIGUSR2, receive_bit);
	while (1)
		pause();
	return (0);
}
