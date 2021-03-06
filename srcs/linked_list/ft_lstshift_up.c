/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift_up.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:12:38 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:12:39 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* first element of the list become the last one */
/* -> top [ 1, 2, 3, 4, 5 ] <- bottom */
/*				become				  */
/* -> top [ 2, 3, 4, 5, 1 ] <- bottom */

void	ft_lstshift_up(t_list *lst)
{
	if (ft_lstsize(lst) < 2)
		return ;
	lst->bottom->next = lst->top;
	lst->top->prev = lst->bottom;
	lst->top = lst->top->next;
	lst->bottom = lst->bottom->next;
	lst->top->prev = NULL;
	lst->bottom->next = NULL;
}
