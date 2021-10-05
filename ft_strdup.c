#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy;
	int		len;

	len = ft_strlen(str);
	copy = (char*)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	ft_memcpy(copy, str, len);
	copy[len] = '\0';
	return (copy);
}