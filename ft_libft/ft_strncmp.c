/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:28:51 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:32:32 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] - s2[i] != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char str1[15] = "e";
	char str2[15]  = "f";

	int res;
	res =  ft_strncmp(str1, str2, 2);

	if(res < 0){
		printf("string uno e ppiu piccola della due\n");
	} else if(res > 0){
		printf("la due e piu ppiccola della uno\n");
	} else {
		printf("sono uguali\n");
	}
}	
*/
