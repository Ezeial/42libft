/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:11:25 by egiraldi          #+#    #+#             */
/*   Updated: 2022/05/16 21:11:38 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_partition(int *array, int low, int high)
{
	int	current_idx;
	int	current_small_idx;

	current_idx = low;
	current_small_idx = low;
	while (current_idx < high + 1)
	{
		if (array[current_idx] < array[high])
		{
			ft_swap_int(&array[current_small_idx], &array[current_idx]);
			current_small_idx++;
		}
		current_idx++;
	}
	ft_swap_int(&array[current_small_idx], &array[high]);
	return (current_small_idx);
}

void	ft_quicksort(int *array, int low, int high)
{
	int	pivot;

	if (low < high)
	{
		pivot = ft_partition(array, low, high);
		ft_quicksort(array, low, pivot - 1);
		ft_quicksort(array, pivot + 1, high);
	}
}
