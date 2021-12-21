#include "libft.h"

void *get_vec_begin(t_vector vec)
{
	return (&((size_t *)vec)[-3]);
}

size_t get_vec_type_size(t_vector vec)
{
	return ((size_t *)vec)[-3];
}

size_t *get_vec_capacity(t_vector vec)
{
	return &((size_t *)vec)[-2];
}

size_t *get_vec_used(t_vector vec)
{
	return &((size_t *)vec)[-1];
}