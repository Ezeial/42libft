#include "libft.h"

t_vector	ft_vecfilter(t_vector vec, predicate predicate, void *arg)
{
	size_t		used;
	size_t		i;
	t_vector	new_vec;

	i = 0;
	used = *get_vec_used(vec);
	new_vec = ft_vecnew(*get_vec_used(vec), get_vec_type_size(vec));
	if (!new_vec)
		return (NULL);
	while (i < used)
	{
		if (!predicate(ft_vecget(vec, i), arg))
			ft_vecpush_back(&new_vec, ft_vecget(vec, i));
		i++;
	}
	return (new_vec);
}