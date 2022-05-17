/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 02:33:54 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/17 02:34:29 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_weight(char c, char *base)
{
	size_t	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

size_t	get_digit_number_in_base(size_t number, size_t baselen)
{
	size_t	result;

	result = 0;
	while (number > 0)
	{
		number /= baselen;
		result++;
	}
	return (result);
}
