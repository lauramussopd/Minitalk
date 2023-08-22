/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:37:04 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:33:43 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charcmp(char c, const char *set)
{
	int	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (set[j] == c)
			return (1);
		else
			j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*res;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_charcmp(s1[start], set) == 1)
		start++;
	while (end > start && ft_charcmp(s1[end - 1], set) == 1)
		end--;
	res = (char *) malloc (sizeof(char) * (end - start) + 1);
	if (res == NULL)
		return (NULL);
	while (start < end)
	{
		res[i] = s1[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int main()
{
	char const *string = "aaaaahelloabc";
	char const *my_set = "abc";
	
	char *my_res = ft_strtrim(string, my_set);
	printf("the result is: %s", my_res);
	return(0);
}
*/
