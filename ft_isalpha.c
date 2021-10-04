#include "libft.h"

int	ft_isalpha(int c)
{
	return (('a' <= (char)c && (char)c <= 'z') || ('A' <= (char)c && (char)c <= 'Z'));
}