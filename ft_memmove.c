/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:48:55 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 01:48:56 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d_copy;
	char	*s_copy;

	d_copy = (char *)dst;
	s_copy = (char *)src;
	if (dst == src)
		return (dst);
	if (s_copy < d_copy)
	{
		while (len--)
			*(d_copy + len) = *(s_copy + len);
		return (dst);
	}
	while (len--)
		*d_copy++ = *s_copy++;
	return (dst);
}
