#include "libft.h"
/*
void *ft_memmove(void *dest, const void *src, size_t n)
{
	void	*src_copy;

	if (!dest && !src)
		return (NULL);
	src_copy = ft_memdup(src, n);
	ft_memcpy(dest, src_copy, n);
	free(src_copy);
	return (dest);

*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d_copy;
	char *s_copy;

	d_copy = (char *)dst;
	s_copy = (char *)src;
	if (dst == src)
		return (dst);
	if (s_copy < d_copy)
	{
		while (len--)
			*(d_copy + len) = *(s_copy + len);
		return (dst);
	}
	while (len--)
		*d_copy++ = *s_copy++;
	return (dst);
}