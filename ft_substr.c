#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start] && i < len && start < ft_strlen(s))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}