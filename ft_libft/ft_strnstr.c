/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 17:01:50 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:32:54 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	res = (char *) haystack;
	i = 0;
	if (needle[i] == '\0')
		return (res);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return (res + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char *str1 = "ejemplo de texto";
	const char *str2 = "te";

	char *res = strnstr(str1, str2, 20);

	if(res != NULL) {
		printf("found: %s\n", res);
	} else {
		printf("not found\n");
	}

	char *my_res = ft_strnstr(str1, str2, 20);

	if(my_res != NULL) {
		printf("found: %s\n", my_res);
	} else {
		printf("not found\n");
	}


	return(0);
}
*/
