#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	void	*src_copy;

	src_copy = ft_memdup(src, n);
	ft_memcpy(dest, src_copy, n);
	free(src_copy);
	return (dest);
}