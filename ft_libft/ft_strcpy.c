/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 13:29:07 by laurmuss          #+#    #+#             */
/*   Updated: 2023/05/29 18:27:20 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (NULL);
}
/*
int main() {
    char source[] = "Hola, mundo!";
    char destination[20];
    
	ft_strcpy(destination, source);
    
    printf("Cadena de origen: %s\n", source);
    printf("Cadena de destino: %s\n", destination);
    
    return 0;
}
*/
