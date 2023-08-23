/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:39:56 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:31:37 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	ret;
	size_t	i;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (destsize <= len_dst)
		return (len_src + destsize);
	else
		ret = len_src + len_dst;
	if (destsize == 0)
		return (0);
	while (len_dst < destsize -1 && src[i] != '\0')
		dst[len_dst++] = src[i++];
	dst[len_dst] = '\0';
	return (ret);
}
