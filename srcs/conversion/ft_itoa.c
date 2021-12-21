/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 00:52:50 by egiraldi          #+#    #+#             */
/*   Updated: 2021/12/02 13:26:14 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef enum e_sign {
	NEGATIVE = -1,
	POSITIVE = 1
}	t_sign;

typedef struct s_strbuilder {
	char			*final_str;
	size_t			len;
	unsigned int	number;
	t_sign			sign;	
}	t_strbuilder;

static size_t	get_final_strlen(t_strbuilder strbuilder)
{
	size_t	count;

	if (!strbuilder.number)
		return (1);
	count = 0;
	if (strbuilder.sign == NEGATIVE)
		count++;
	while (0 < strbuilder.number)
	{
		strbuilder.number /= 10;
		count++;
	}
	return (count);
}

static void	build_str(t_strbuilder *strbuilder)
{
	strbuilder->final_str[strbuilder->len] = 0;
	strbuilder->len--;
	if (strbuilder->number == 0)
		strbuilder->final_str[0] = '0';
	while (0 < strbuilder->number)
	{
		strbuilder->final_str[strbuilder->len--]
			= (strbuilder->number % 10) + '0';
		strbuilder->number /= 10;
	}
	if (strbuilder->sign == NEGATIVE)
		strbuilder->final_str[0] = '-';
}

char	*ft_itoa(int n)
{
	t_strbuilder	strbuilder;

	if (n < 0)
		strbuilder.sign = NEGATIVE;
	else
		strbuilder.sign = POSITIVE;
	strbuilder.number = ft_abs(n);
	strbuilder.len = get_final_strlen(strbuilder);
	strbuilder.final_str = (char *) malloc(sizeof(char )
			* (strbuilder.len + 1));
	if (!strbuilder.final_str)
		return (NULL);
	build_str(&strbuilder);
	return (strbuilder.final_str);
}
