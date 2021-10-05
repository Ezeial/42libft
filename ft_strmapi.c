#include "libft.h"

char	*ft_strmapi(char *s, char(*f)(unsigned int, char))
{
	char			*mapped;
	unsigned int	i;
	
	mapped = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!mapped)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mapped[i] = f(i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}