/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:11:11 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/17 03:10:13 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

typedef struct number_data {
	size_t	number;
	int		sign;
}	t_number_data;

static t_number_data	compute_number(char *number, char *base_from)
{
	t_number_data	number_data;
	size_t			baselen;

	baselen = ft_strlen(base_from);
	if (*number == '-')
	{
		number_data.sign = -1;
		number++;
	}
	else
		number_data.sign = 1;
	number_data.number = 0;
	while (*number)
	{
		number_data.number = get_weight(*number, base_from)
			+ baselen * number_data.number;
		number++;
	}
	return (number_data);
}

static void	ft_norm(t_number_data nb_data, size_t *baselen,
	char *base_to, size_t *final_len)
{
	*baselen = ft_strlen(base_to);
	*final_len = get_digit_number_in_base(nb_data.number, *baselen);
	if (nb_data.sign < 0)
	{
		if (nb_data.number != 0)
			(*final_len)++;
		else
			nb_data.sign = 1;
	}
}

static char	*ft_convert_number(t_number_data nb_data, char *base_to)
{
	char	*final_str;
	size_t	final_len;
	size_t	i;
	size_t	baselen;

	ft_norm(nb_data, &baselen, base_to, &final_len);
	final_str = malloc(sizeof(char) * (final_len + 1));
	if (!final_str)
		return (NULL);
	i = 0;
	if (nb_data.number == 0)
		final_str[i++] = '0';
	while (nb_data.number > 0)
	{
		final_str[i] = base_to[nb_data.number % baselen];
		nb_data.number /= baselen;
		i++;
	}
	if (nb_data.sign < 0)
		final_str[i++] = '-';
	final_str[i] = 0;
	return (ft_strrev(final_str));
}

char	*ft_convert_base(char *number, char *base_from, char *base_to)
{
	return (ft_convert_number(compute_number(number, base_from), base_to));
}
