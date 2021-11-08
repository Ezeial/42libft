/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 00:52:50 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 02:12:33 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_digit_nb(int n)
{
	unsigned int	result;
	unsigned int	un;

	if (n == 0)
		return (1);
	result = 0;
	if (n < 0)
		result++;
	un = ft_abs(n);
	while (0 < un)
	{
		un /= 10;
		result++;
	}
	return (result);
}

static void	build_str(unsigned int un, char *final_str, size_t *idx)
{
	while (0 < un)
	{
		final_str[*idx] = (un % 10) + '0';
		un /= 10;
		(*idx)++;
	}
}

char	*ft_itoa(int n)
{
	char			*final_str;
	unsigned int	final_str_len;
	unsigned int	un;
	int				sign;
	size_t			i;

	sign = 1;
	if (n < 0)
		sign = -sign;
	final_str_len = get_digit_nb(n);
	final_str = malloc(sizeof(char) * final_str_len + 1);
	if (!final_str)
		return (NULL);
	un = ft_abs(n);
	i = 0;
	if (un == 0)
		final_str[i++] = '0';
	build_str(un, final_str, &i);
	if (sign < 0)
		final_str[i++] = '-';
	final_str[i] = '\0';
	return (ft_strrev(final_str));
}
