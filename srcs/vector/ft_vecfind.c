/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:13:39 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:22:04 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_vecfind(t_vector vec, t_predicate predicate, void *arg)
{
	size_t	used;
	size_t	i;

	i = 0;
	used = *get_vec_used(vec);
	while (i < used)
	{
		if (predicate(ft_vecget(vec, i), arg))
			return (ft_vecget(vec, i));
		i++;
	}
	return (NULL);
}
