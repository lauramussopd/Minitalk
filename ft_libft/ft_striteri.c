/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:30:24 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:31:16 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void  to_uppercase(unsigned int i, char *c)
{

	*c =  *c - 32;
}
int main()
{
	char *s = ft_strdup("HOLA	hola");
	ft_striteri(s, to_uppercase);
	printf("s = %s\n", s);

	return(0);
}*/
