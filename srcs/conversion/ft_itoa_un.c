/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_un.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:11:16 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:17:49 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digit_nb(size_t n)
{
	size_t	result;

	if (n == 0)
		return (1);
	result = 0;
	while (0 < n)
	{
		n /= 10;
		result++;
	}
	return (result);
}

char	*ft_itoa_un(size_t n)
{
	char	*final_str;
	size_t	final_str_len;
	size_t	i;

	final_str_len = get_digit_nb(n);
	final_str = malloc(sizeof(char) * final_str_len + 1);
	if (!final_str)
		return (NULL);
	i = 0;
	if (n == 0)
		final_str[i++] = '0';
	while (0 < n)
	{
		final_str[i++] = (n % 10) + '0';
		n /= 10;
	}
	final_str[i] = '\0';
	return (ft_strrev(final_str));
}
