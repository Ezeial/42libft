#include "libft.h"

void	*ft_vecfind(t_vector vec, predicate predicate, void *arg)
{
	size_t used;
	size_t i;

	i = 0;
	used = *get_vec_used(vec);
	while (i < used)
	{
		if (predicate(ft_vecget(vec, i), arg))
			return (ft_vecget(vec, i));
		i++;
	}
	return (NULL);
}