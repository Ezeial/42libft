/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:49:06 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 03:18:44 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(size_t, void*, void*), void *arg)
{
	t_list_elem	*current;
	size_t		i;

	current = lst->top; 
	i = 0;
	while (current)
	{
		f(i, current->data, arg);
		current = current->next;
		i++;
	}
}
