/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:10:59 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:27:38 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	p = (unsigned char *) s;
	value = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (p[i] == value)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char str[] = "ciao bella mia";
	const char ch = 'b';

	char *res;
	char *my_res;

	res = memchr(str, ch, strlen(str));
	printf("string after %c is %s\n", ch, res);
	my_res = ft_memchr(str, ch, strlen(str));
	printf("string dopo %c con la mia funzione %s\n", ch, my_res);
	return(0);
}*/
