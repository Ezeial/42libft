/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:48:27 by egiraldi          #+#    #+#             */
/*   Updated: 2021/12/02 13:07:22 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	size;
	char	temp;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		temp = str[i];
		str[i] = str[size - 1];
		str[size - 1] = temp;
		i++;
		size--;
	}
	return (str);
}
