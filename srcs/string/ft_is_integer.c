#include "libft.h"

int	ft_is_integer(char *str)
{
	long int number;
	int sign;

	if (ft_strlen(str) > 11)
		return (0);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		sign = 1;
	number = 0;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		number = number * 10 + (*str - '0');
		str++;
	}
	if (sign > 0)
		return (number <= 2147483647);
	else
		return (number <= 2147483648);
}

