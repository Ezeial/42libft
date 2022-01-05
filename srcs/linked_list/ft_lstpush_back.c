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

void	ft_lstpush_back(t_list *lst, t_list_elem *new_elem)
{
	if (!lst->bottom)
	{
		lst->bottom = new_elem;
		lst->top = new_elem;
	}
	else
	{
		new_elem->next = NULL;
		lst->bottom->next = new_elem;
		new_elem->prev = lst->bottom;
		lst->bottom = lst->bottom->next;
	}
}
