/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vec_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:16:24 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:17:13 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*get_vec_begin(t_vector vec)
{
	return (&((size_t *)vec)[-3]);
}

size_t	get_vec_type_size(t_vector vec)
{
	return (((size_t *)vec)[-3]);
}

size_t	*get_vec_capacity(t_vector vec)
{
	return (&((size_t *)vec)[-2]);
}

size_t	*get_vec_used(t_vector vec)
{
	return (&((size_t *)vec)[-1]);
}
