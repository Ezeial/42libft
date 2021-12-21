#include "libft.h"


// PROBABLY TOO HIGH TO UNDERSTAND WHY THIS SHIT DOESNT WORK AND THE SECOND ONE DOES.
/*
void	ft_vecpush_back(t_vectorptr vecptr, void *data)
{
	size_t type_size;
	void *temp;
	t_vector *vec;

	vec = (void **)vecptr;
	type_size = get_vec_type_size(*vec);
	if (*get_vec_used(*vec) >= *get_vec_capacity(*vec))
	{
		temp = ft_vecnew(*get_vec_capacity(*vec) * 2, type_size);
		if (!temp)
			return ;
		ft_memcpy(get_vec_begin(temp), get_vec_begin(*vec), (*get_vec_used(*vec) * type_size) + (3 * sizeof(size_t)));
		ft_vecclear(*vec);
		*vec = temp;
	}
	ft_memcpy((unsigned char *)*vec + (*get_vec_used(*vec) * type_size), data, type_size);
	(*get_vec_used(*vec))++;
}
*/
void ft_vecpush_back(t_vector vecptr, void *data)
{
	size_t type_size;
	void *temp;
	void **vec;

	vec = (void **)vecptr;
	type_size = get_vec_type_size(*vec);
	if (*get_vec_used(*vec) >= *get_vec_capacity(*vec))
	{
		*get_vec_capacity(*vec) *= 2;
		temp = malloc((sizeof(size_t) * 3) + (*get_vec_capacity(*vec) * type_size));
		if (!temp)
			return ;
		ft_memcpy(temp, &((size_t *)*vec)[-3], (*get_vec_used(*vec) * type_size) + (3 * sizeof(size_t)));
		ft_vecclear(*vec);
		*vec = &((size_t *)temp)[3];
	}
	ft_memcpy((unsigned char *)*vec + (*get_vec_used(*vec) * type_size), data, type_size);
	(*get_vec_used(*vec))++;
}