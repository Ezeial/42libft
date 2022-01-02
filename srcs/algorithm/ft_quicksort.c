#include "libft.h"

static size_t ft_partition(int *array, size_t low, size_t high)
{
	size_t	current_idx;
	size_t	current_small_idx;
	
	current_idx = low;
	current_small_idx = low;
	while (current_idx < high + 1)
	{
		if (array[current_idx] > array[high])
		{
			ft_swap_int(&array[current_small_idx], &array[current_idx]);
			current_small_idx++;
		}
		current_idx++;
	}
	ft_swap_int(&array[current_small_idx], &array[high]);
	return (current_small_idx);
}


void	ft_quicksort(int *array, size_t low, size_t high)
{
	size_t	pivot;

	if (low < high)
	{
		pivot = ft_partition(array, low, high);
		if (pivot == 0)
			return ;
		ft_quicksort(array, low, pivot - 1);
		ft_quicksort(array, pivot + 1, high);
	}
}

