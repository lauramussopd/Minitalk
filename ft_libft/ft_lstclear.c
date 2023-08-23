/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:47:53 by laurmuss          #+#    #+#             */
/*   Updated: 2023/07/04 18:36:35 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	while (*lst != NULL)
	{
		aux = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = aux;
	}
}
/*
void	print(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		printf("Content: %s\n", tmp->content);
		tmp = tmp->next;
	}
}

int	main()
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("primo");
	printf("Lst: %p\n", lst);
	new = ft_lstnew("patata");
	ft_lstadd_back(&lst, new);
	new = ft_lstnew("cipolla");
	ft_lstadd_back(&lst, new);
	new = ft_lstnew("carota");
	ft_lstadd_back(&lst, new);
	new = ft_lstnew("sedano");
	ft_lstadd_back(&lst, new);
	print(&lst);
	ft_lstclear(&lst, free);
}
*/
// La funzione non funzionba perche' il content non e' creato con
// memoria dinamica (malloc) ma con memoria statica
