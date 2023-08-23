/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpercentage.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:14:56 by laurmuss          #+#    #+#             */
/*   Updated: 2023/08/04 16:23:01 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_putpercentage(void)
{
	int	i;

	i = write(1, "%", 1);
	if (i == -1)
		return (-1);
	return (i);
}
