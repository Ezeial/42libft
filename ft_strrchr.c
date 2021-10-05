#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	int	last_occurence;

	i = 0;
	last_occurence = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			last_occurence = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (last_occurence != -1)
		return ((char *)(s + last_occurence));
	return (NULL);
}