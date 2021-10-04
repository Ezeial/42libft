#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= (char)c && (char)c <= '9');
}