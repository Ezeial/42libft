/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:49:11 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 03:18:42 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list *lst, void *data)
{
	t_list_elem *new_el;

	new_el = ft_lstcreate_el(data);
	if (!new_el)
		return ;
	if (!lst->bottom)
	{
		lst->bottom = new_el;
		lst->top = new_el;
	}
	else
	{
		lst->bottom->next = new_el;
		new_el->prev = lst->bottom;
		lst->bottom = lst->bottom->next;
	}
}
