/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:33:51 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:28:11 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;
	size_t				i;

	ptr_dest = (unsigned char *) dest;
	ptr_src = (const unsigned char *) src;
	if (ptr_dest == ptr_src)
		return (dest);
	if (ptr_dest < ptr_src)
	{
		i = -1;
		while (++i < num)
			ptr_dest[i] = ptr_src[i];
	}
	else
	{
		i = num;
		while (i > 0)
		{
			ptr_dest[i - 1] = ptr_src[i - 1];
			i--;
		}
	}
	return (ptr_dest);
}
/*
int main()
{
	char str[] = "Hello, World!";
	ft_memmove(&str[5], &str[0], 2);
	printf("modified string: %s\n", str);
	return(0);
}
*/
