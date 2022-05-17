/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstshift_down.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:12:24 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:12:25 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* last element of the list become the first one */
/* -> top [ 1, 2, 3, 4, 5 ] <- bottom */
/*				become				  */
/* -> top [ 5, 1, 2, 3, 4 ] <- bottom */

void	ft_lstshift_down(t_list *lst)
{
	if (ft_lstsize(lst) < 2)
		return ;
	lst->top->prev = lst->bottom;
	lst->bottom->next = lst->top;
	lst->top = lst->top->prev;
	lst->bottom = lst->bottom->prev;
	lst->top->prev = NULL;
	lst->bottom->next = NULL;
}
