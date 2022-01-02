#include "libft.h"

/* last element of the list become the first one */
/* -> top [ 1, 2, 3, 4, 5 ] <- bottom */
/*				become				  */
/* -> top [ 5, 1, 2, 3, 4 ] <- bottom */

void ft_lstshift_down(t_list *lst)
{
	if (ft_lstsize(lst) < 2)
		return ;
	lst->top->prev = lst->bottom;
	lst->bottom->next = lst->top;
	lst->top = lst->top->prev;
	lst->bottom = lst->bottom->prev;
	lst->top->prev = NULL;
	lst->bottom->next = NULL;
}
