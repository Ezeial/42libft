#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	while (*str == '\t' || *str == '\n' || *str == '\v' ||
		*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}	
	result = 0;
	while (ft_isdigit(*str))
	{
		result = (int)(*str - '0') + result * 10;
		str++;
	}
	return (result * sign);
}