/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:41:41 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 17:10:41 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_array_len(int b)
{
	int			res;
	long int	nbr;

	nbr = (long int)b;
	res = 0;
	if (b == 0)
		return (1);
	if (b < 0)
	{
		nbr = -b;
		res = res + 1;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char		*dir;
	int			size;
	long int	nbr;

	nbr = (long int)n;
	size = ft_array_len(n);
	dir = (char *)malloc(sizeof(char) * (size + 1));
	if (dir)
	{
		dir[size] = '\0';
		if (n == 0)
			dir[0] = '0';
		if (n < 0)
		{
			nbr = -(long int)n;
			dir[0] = '-';
		}
		while (nbr != 0)
		{
			dir[size - 1] = nbr % 10 + '0';
			nbr = nbr / 10;
			size--;
		}
	}
	return (dir);
}
/*
int main()
{
	printf("Mi numero es %s", ft_itoa(-0));
	return(0);
}
*/
