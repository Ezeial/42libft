/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:14:30 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:27:23 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	ft_vecmap(t_vector vec, t_vector_callback callback, void *arg)
{
	t_vector	new_vec;

	new_vec = ft_vecnew(*get_vec_capacity(vec), get_vec_type_size(vec));
	if (!new_vec)
		return (NULL);
	ft_memcpy(new_vec, &((size_t *)vec)[-3],
		(*get_vec_used(vec) * get_vec_type_size(vec)) + (3 * sizeof(size_t)));
	new_vec = &((size_t *)new_vec)[3];
	ft_vecfor_each(new_vec, callback, arg);
	return (new_vec);
}
