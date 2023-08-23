/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_maius.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:14:27 by laurmuss          #+#    #+#             */
/*   Updated: 2023/08/04 16:17:34 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_puthex_maius(unsigned int num)
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
			if (ft_putchar (num - 10 + 'A') == -1)
				return (-1);
		}
	}
	else
	{
		if (ft_puthex_maius (num / 16) == -1)
			return (-1);
		if (ft_puthex_maius (num % 16) == -1)
			return (-1);
	}
	return (rtn);
}
