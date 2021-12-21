#include "libft.h"

void *ft_vecget(t_vector vec, size_t i)
{
	return &((unsigned char *)vec)[i * get_vec_type_size(vec)];
}