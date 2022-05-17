/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zpadd_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 18:26:18 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 22:04:43 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_zpadd_nb(char *number, size_t final_len)
{
	size_t	current_len;
	char	*padded_str;

	current_len = ft_strlen(number);
	if (current_len >= final_len)
		return (ft_strdup(number));
	padded_str = malloc(sizeof(char) * (final_len + 1));
	if (number[0] == '-')
	{
		padded_str[0] = '-';
		ft_memset(padded_str + 1, '0', final_len - (current_len - 1));
		ft_strlcpy(padded_str + (final_len - (current_len - 1)), \
			number + 1, (final_len + 1));
	}
	else
	{
		ft_memset(padded_str, '0', final_len - current_len);
		ft_strlcpy(padded_str + (final_len - current_len), \
			number, (final_len + 1));
	}
	return (padded_str);
}
