/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:12:09 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:12:14 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list_elem	*ft_lstpop_front(t_list *lst)
{
	t_list_elem	*first_node;

	if (!lst || !lst->top)
		return (NULL);
	first_node = lst->top;
	lst->top = lst->top->next;
	if (lst->top)
		lst->top->prev = NULL;
	first_node->next = NULL;
	first_node->prev = NULL;
	return (first_node);
}
