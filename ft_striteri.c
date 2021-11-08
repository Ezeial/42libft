#include "libft.h"

void	ft_striteri(const char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &((char *)s)[i]);
		i++;
	}
}
