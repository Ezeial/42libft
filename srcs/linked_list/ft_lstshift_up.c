#include "libft.h"

/* first element of the list become the last one */
/* -> top [ 1, 2, 3, 4, 5 ] <- bottom */
/*				become				  */
/* -> top [ 2, 3, 4, 5, 1 ] <- bottom */

void ft_lstshift_up(t_list *lst)
{
	if (ft_lstsize(lst) < 2)
		return ;
	lst->bottom->next = lst->top;
	lst->top->prev = lst->bottom;
	lst->top = lst->top->next;
	lst->bottom = lst->bottom->next;
	lst->top->prev = NULL;
	lst->bottom->next = NULL;	
}
