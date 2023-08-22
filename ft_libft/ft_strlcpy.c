/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:57:49 by laurmuss          #+#    #+#             */
/*   Updated: 2023/06/05 16:29:37 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*my_strcpy(char *dest, const char *src, int len)
{
	while (*src != '\0' && len > 0)
	{
		*dest = *src;
		dest++;
		src++;
		len--;
	}
	*dest = '\0';
	return (dest);
}

size_t	ft_strlcpy(char *dest, char const *src, size_t dest_size)
{
	size_t	size_src;
	size_t	i;

	i = 0;
	size_src = ft_strlen(src);
	if (dest_size == 0)
		return (size_src);
	while (src[i] != '\0' && i < dest_size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (size_src);
}
/*
int main () {
	char source[] = "ciao mondo";
	char dest[5];

	strlcpy(dest, source, sizeof(dest));
	printf("copied string: %s\n", dest);

	ft_strlcpy(dest, source, sizeof(dest));
	printf("copied string: %s\n", dest);

	return(0);
}
*/
