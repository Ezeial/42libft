/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:14:46 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:14:57 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	ft_vecnew(size_t initial_capacity, size_t type_size)
{
	t_vector	vec;
	size_t		*casted_vec;

	if (initial_capacity == 0)
		initial_capacity = 1;
	vec = malloc((type_size * initial_capacity) + (3 * sizeof(size_t)));
	if (!vec)
		return (NULL);
	casted_vec = (size_t *)vec;
	casted_vec[0] = type_size;
	casted_vec[1] = initial_capacity;
	casted_vec[2] = 0;
	vec = casted_vec + 3;
	return (vec);
}
