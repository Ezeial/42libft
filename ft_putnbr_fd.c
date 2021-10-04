#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		sign;
	int		len;


	sign = 1;
	if (n < 0)
		sign *= -sign;
	ft_bzero(str, 13);
	len = 0;
	if (n == 0)
		str[len] = '0';
	while (n != 0)
	{
		str[len++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (sign < 0)
		str[len] = '-';
	else if (len > 0)
		len--;
	while (len >= 0)
		write(fd, &str[len--], 1);
}