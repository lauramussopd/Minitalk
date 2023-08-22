/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:29:35 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:32:03 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char to_uppercase(unsigned int index, char c)
{
    return c-32;
}
int main()
{
    const char *input = "laura";
:wq
const char *input = (const char *)ft_strdup("laura")
    char *res = ft_strmapi(input, to_uppercase);

    printf("Input: %s\n", input);
    printf("Result: %s\n", res);

    free(res); 
    return 0;
}
*/
