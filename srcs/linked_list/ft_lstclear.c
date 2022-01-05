/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:49:08 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 03:18:40 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list *lst, void (*del)(void*))
{
	t_list_elem	*current;
	t_list_elem	*temp;

	if (lst)
	{
		current = lst->top;
		while (current)
		{
			temp = current->next;
			ft_lstdelone(current, del);
			current = temp;
		}
		free(lst);
		lst = (NULL);
	}
}
