/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 03:18:35 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 03:18:36 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(const char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &((char *)s)[i]);
		i++;
	}
}
