#include "libft.h"

char *ft_strrev(char *str)
{
	int	i;
	int size;
	char temp;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		temp = str[i];
		str[i] = str[size - 1];
		str[size - 1] = temp;
		i++;
		size--;
	}
	return (str);
} 