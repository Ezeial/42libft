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

/*
 * 	pop the last node of the lst and return a pointer
 * 	to the data holded by it
 * 	YOU NEED TO FREE THE DATA
 */

void	*ft_lstpop_back(t_list *lst)
{
	t_list_elem	*last_node;
	void		*data;

	if (ft_lstsize(lst) < 1)
		return (NULL);
	last_node = lst->bottom;
	data = last_node->data;
	lst->bottom = lst->bottom->prev;
	if (lst->bottom)
		lst->bottom->next = NULL;
	else
		lst->top = NULL;
	free(last_node);
	return (data);
}
