/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:48:27 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 01:48:28 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
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
