#include "libft.h"

t_list_elem	*ft_lstcreate_elem(void *data)
{
	t_list_elem *new_elem;

	new_elem = (t_list_elem *)malloc(sizeof(t_list_elem));
	if (!new_elem)
		return (NULL);
	new_elem->data = data;
	new_elem->prev = NULL;
	new_elem->next = NULL;
	return (new_elem);
}
