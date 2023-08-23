/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:02:35 by laurmuss          #+#    #+#             */
/*   Updated: 2023/08/04 16:26:12 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_count_digits(int b)
{
	int			res;
	long int	num;

	num = (long int)b;
	res = 0;
	if (b == 0)
		return (1);
	if (b < 0)
	{
		num = -b;
		res++;
	}
	while (num)
	{
		num = num / 10;
		res++;
	}
	return (res);
}

int	ft_putnbr(int n)
{
	unsigned int	num;
	int				rtn;

	rtn = ft_count_digits(n);
	num = n;
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		num = -n;
	}
	if (num < 10)
	{
		if (ft_putchar(num + '0') == -1)
			return (-1);
	}
	else
	{
		if (ft_putnbr(num / 10) == -1)
			return (-1);
		if (ft_putnbr(num % 10) == -1)
			return (-1);
	}
	return (rtn);
}
