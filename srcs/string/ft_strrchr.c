/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:48:28 by egiraldi          #+#    #+#             */
/*   Updated: 2021/11/08 01:48:29 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		last_occurence;

	i = 0;
	last_occurence = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_occurence = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (last_occurence != -1)
		return ((char *)(s + last_occurence));
	return (NULL);
}
