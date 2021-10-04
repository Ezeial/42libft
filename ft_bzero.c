#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
	unsigned int    i;

	if (!s)
		return (NULL);
	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = (unsigned char)'\0';
	return (s);
}