#include "libft.h"

void ft_vecfor_each(t_vector vec, vector_callback callback, void *arg)
{
	size_t i;
	size_t used;

	i = 0;
	used = *get_vec_used(vec);
	while (i < used)
	{
		callback(ft_vecget(vec, i), arg);
		i++;
	}
}