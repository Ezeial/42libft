#include "libft.h"

void ft_vecclear(t_vector vec)
{
	free(get_vec_begin(vec));
}