/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:49:10 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 03:18:41 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list *lst, void *data)
{	
	t_list_elem	*new_el;

	new_el = ft_lstcreate_el(data);
	if (!new_el)
		return ;
	if (!lst->top)
	{
		lst->top = new_el;
		lst->bottom = new_el;
	}
	else
	{
		new_el->next = lst->top;
		lst->top->prev = new_el;
		lst->top = lst->top->prev;
	}
}
