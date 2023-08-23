/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:57:22 by laurmuss          #+#    #+#             */
/*   Updated: 2023/05/19 16:01:34 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	ptr_dest = (unsigned char *) dst;
	ptr_src = (unsigned char *) src;
	while (n-- > 0)
		*(ptr_dest++) = *(ptr_src++);
	return (dst);
}
