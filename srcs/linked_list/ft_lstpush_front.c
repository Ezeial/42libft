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

void	ft_lstpush_front(t_list *lst, t_list_elem *new_elem)
{	
	if (!lst->top)
	{
		lst->top = new_elem;
		lst->bottom = new_elem;
	}
	else
	{
		new_elem->prev = NULL;
		new_elem->next = lst->top;
		lst->top->prev = new_elem;
		lst->top = lst->top->prev;
	}
}
