/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecfor_each.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:13:42 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:27:33 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vecfor_each(t_vector vec, t_vector_callback callback, void *arg)
{
	size_t	i;
	size_t	used;

	i = 0;
	used = *get_vec_used(vec);
	while (i < used)
	{
		callback(ft_vecget(vec, i), arg);
		i++;
	}
}
