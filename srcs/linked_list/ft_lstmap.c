/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:49:05 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 03:18:46 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(size_t, void*, void*), void *arg, void (*del)(void *))
{
	t_list_elem	*current;
	t_list_elem *new_elem;
	t_list		*new_list;
	size_t		i;

	new_list = ft_lstnew();
	current = lst->top;
	i = 0;
	while (current)
	{
		new_elem = ft_lstcreate_elem(f(i, current->data, arg));
		if (!new_elem)
		{
			ft_lstclear(new_list, del);
			return (NULL);
		}
		ft_lstpush_back(new_list, f(i, current->data, arg));
		current = current->next;
		i++;
	}
	return (new_list);
}
