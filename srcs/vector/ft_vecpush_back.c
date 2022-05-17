/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecpush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:15:25 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:16:20 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_vecpush_back(t_vector vecptr, void *data)
{
	size_t	type_size;
	void	*temp;
	void	**vec;

	vec = (void **)vecptr;
	type_size = get_vec_type_size(*vec);
	if (*get_vec_used(*vec) >= *get_vec_capacity(*vec))
	{
		*get_vec_capacity(*vec) *= 2;
		temp = malloc((sizeof(size_t) * 3)
				+ (*get_vec_capacity(*vec) * type_size));
		if (!temp)
			return ;
		ft_memcpy(temp, &((size_t *)*vec)[-3],
			(*get_vec_used(*vec) * type_size) + (3 * sizeof(size_t)));
		ft_vecclear(*vec);
		*vec = &((size_t *)temp)[3];
	}
	ft_memcpy((unsigned char *)*vec + (*get_vec_used(*vec) * type_size),
		data, type_size);
	(*get_vec_used(*vec))++;
}
