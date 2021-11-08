/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:49:01 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 01:49:02 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dest;
	unsigned char	*str;

	i = 0;
	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	while (i < n)
	{
		dest[i] = str[i];
		if (str[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
