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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*, void*), void *arg)
{
	t_list_elem	*current;
	t_list		*new_list;

	new_list = ft_lstnew();
	current = lst->top;
	while (current)
	{
		ft_lstadd_back(new_list, f(current->data, arg));
		current = current->next;
	}
	return (new_list);
}
