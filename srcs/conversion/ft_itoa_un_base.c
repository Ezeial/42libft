/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_un_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:11:14 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/17 02:54:50 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_un_base(size_t number, char *base_to)
{
	char	*final_str;
	size_t	baselen;
	size_t	i;

	baselen = ft_strlen(base_to);
	final_str = malloc(sizeof(char)
			* (get_digit_number_in_base(number, baselen) + 1));
	if (!final_str)
		return (NULL);
	i = get_digit_number_in_base(number, baselen);
	final_str[i--] = 0;
	if (number == 0)
		final_str[i] = base_to[0];
	while (number > 0)
	{
		final_str[i--] = base_to[number % baselen];
		number /= baselen;
	}
	return (final_str);
}
