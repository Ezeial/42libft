#include "libft.h"

unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (unsigned int)-n;
	else
		return (unsigned int)n;
}