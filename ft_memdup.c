#include "libft.h"

void *ft_memdup(const void *src, size_t n)
{
    void *copy;

    copy = (void *)malloc(n);
    if (!copy)
        return (NULL);
    return (ft_memcpy(copy, src, n));
}