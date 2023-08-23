/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 20:13:09 by laurmuss          #+#    #+#             */
/*   Updated: 2023/06/27 18:19:29 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	new->next = *list;
	*list = new;
}
/*
inn main()
{
	t_list *first;
	t_list a;
	t_list b;
	t_list c;
	a.content = ft_strdup("Juan");
	b.content = ft_strdup("Maria");
	c.content = ft_Strdup("Pepito")
	//t_list *d;
	//d = malloc(sizeof(t_list) * 1)
	
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	first = &a; 

	t_list d;
	ft_lstadd_front(&first, d);
*/
