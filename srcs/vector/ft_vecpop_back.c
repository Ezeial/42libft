#include "libft.h"

void ft_vecpop_back(t_vector vec)
{
	if (*get_vec_used(vec) > 0)
		(*get_vec_used(vec))--;	
}