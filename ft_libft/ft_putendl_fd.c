/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 15:21:35 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:28:55 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		write(fd, &s[i], 1);
	}
	write(fd, "\n", 1);
}
/*
int main()
{
	char *s = "hello";
	int fd = 1;

	ft_putendl_fd(s, fd);
	return (0);
}
*/
