/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:05:35 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:27:07 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp->content = content;
	temp->next = NULL;
	return (temp);
}
/*
int main()
{	
	char *content = "lau";
	t_list *node;
	node = ft_lstnew(content);

	printf("My content is: %s", (char *)node->content);
}
*/
