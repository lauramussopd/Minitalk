/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:06:48 by laurmuss          #+#    #+#             */
/*   Updated: 2023/08/04 16:14:04 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_hex(unsigned long long b)
{
	unsigned long long	res;
	unsigned long long	num;

	num = (unsigned long long)b;
	res = 0;
	if (b == 0)
		return (1);
	while (num)
	{
		num = num / 16;
		res++;
	}
	return (res);
}

int	ft_puthex(unsigned long long num)
{
	int	rtn;

	rtn = ft_count_hex(num);
	if (num < 16)
	{
		if (num < 10)
		{
			if (ft_putchar (num + '0') == -1)
				return (-1);
		}
		else
		{
			if (ft_putchar (num - 10 + 'a') == -1)
				return (-1);
		}
	}
	else
	{
		if (ft_puthex (num / 16) == -1)
			return (-1);
		if (ft_puthex (num % 16) == -1)
			return (-1);
	}
	return (rtn);
}
