#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *current;
	t_list *temp;

	current = *lst;
	while (current)
	{
		temp = current->next;
		ft_lstdelone(current, del);
		current = temp;
	}
	*lst = NULL;
}