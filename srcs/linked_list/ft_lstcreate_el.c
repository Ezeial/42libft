#include "libft.h"

t_list_elem	*ft_lstcreate_el(void *data)
{
	t_list_elem *new_el;

	new_el = malloc(sizeof(t_list_elem));
	if (!new_el)
		return (NULL);
	new_el->data = data;
	new_el->prev = NULL;
	new_el->next = NULL;
	return (new_el);
}