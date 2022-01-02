#include "libft.h"

void	ft_swap_int(int *a , int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
