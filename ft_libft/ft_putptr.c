/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:32:25 by laurmuss          #+#    #+#             */
/*   Updated: 2023/08/04 16:34:56 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_putptr(unsigned long long p)
{
	int				rtn;

	rtn = 0;
	if (write (1, "0x", 2) != 2)
		return (-1);
	rtn = ft_puthex(p);
	if (rtn == -1)
		return (-1);
	return (rtn + 2);
}
