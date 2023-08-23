/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:16:27 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:29:55 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_counter(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

void	ft_free(char **split, int num)
{
	while (num > 0)
	{
		num--;
		free(split[num]);
	}
	free (split);
}

char	**ft_loop(char const *s, char c, char **split, int num)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			start = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			split[num] = ft_substr(s, start, i - start + 1);
			if (split[num] == NULL)
			{
				ft_free(split, num);
				return (0);
			}
			num++;
		}
		i++;
	}
	split[num] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	int		num;

	num = 0;
	start = 0;
	split = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!split)
		return (NULL);
	split = ft_loop(s, c, split, num);
	if (split == NULL)
		return (NULL);
	return (split);
}
/*
int main() {
	char **split;
	int i;
	i = 0;
	split = ft_split("    ", ' ');
	while(split[i])
	{
		printf("La columan %d es: |%s|\n", i, split[i]);
		i++;
	}
}*/
