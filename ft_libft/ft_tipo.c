/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tipo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 20:14:33 by laurmuss          #+#    #+#             */
/*   Updated: 2023/08/04 16:40:05 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tipo(char c, va_list args)
{
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, unsigned long long)));
	else if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if ((c == 'd') || (c == 'i'))
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putuns(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned int)));
	else if (c == 'X')
	{
		return (ft_puthex_maius(va_arg(args, unsigned int)));
	}
	else if (c == '%')
		return (ft_putpercentage());
	return (0);
}
