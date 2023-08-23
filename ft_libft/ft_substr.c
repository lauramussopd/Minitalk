/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:14:26 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 17:12:38 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*sub;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (slen < len)
		len = slen;
	if (len > slen - start)
		len = slen - start;
	if (start > slen)
		return (ft_strdup(""));
	sub = (char *) ft_calloc(len + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
