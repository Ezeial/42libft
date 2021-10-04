#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	const char	newline = '\n';

	write(fd, s, ft_strlen(s));
	write(fd, &newline, 1);
}