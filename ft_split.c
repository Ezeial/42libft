/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 01:48:48 by egiraldi          #+#    #+#             */
/*   Updated: 2021/12/02 13:04:23 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct indexes {
	int	start;
	int	end;
	int	i;
}		t_indexes;

static void	init_indexes(t_indexes *ids)
{
	ids->start = 0;
	ids->end = 0;
	ids->i = 0;
}

static int	compute_substr_nb(char const *s, char c)
{
	t_indexes	ids;
	int			substr_nb;

	init_indexes(&ids);
	substr_nb = 0;
	while (s[ids.end])
	{
		while (s[ids.end] && s[ids.end] != c)
			ids.end++;
		if (ids.start < ids.end)
		{
			substr_nb++;
			ids.start = ids.end;
		}
		else
		{
			ids.start++;
			ids.end = ids.start;
		}
	}
	return (substr_nb);
}

char	**ft_split(char const *s, char c)
{
	t_indexes	ids;
	char		**split;

	init_indexes(&ids);
	split = (char **)malloc(sizeof(char *) * (compute_substr_nb(s, c) + 1));
	if (!split)
		return (NULL);
	while (s[ids.end])
	{
		while (s[ids.end] && s[ids.end] != c)
			ids.end++;
		if (ids.start < ids.end)
		{
			split[ids.i++] = ft_substr(s, ids.start, ids.end - ids.start);
			ids.start = ids.end;
		}
		else
		{
			ids.start++;
			ids.end = ids.start;
		}
	}
	split[ids.i] = 0;
	return (split);
}
