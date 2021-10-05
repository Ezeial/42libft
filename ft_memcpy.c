#include "libft.h"
/*
void *ft_memcpy(void * dest, const void * src, size_t n)
{
	size_t    i;
	
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dest);
}
*/
void *ft_memcpy(void * dst, const void * src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*dest;

	if (!dst && !src)
		return (NULL);
	str = (unsigned char *)src;
	dest = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(str + i);
		i++;
	}
	return (dst);
}