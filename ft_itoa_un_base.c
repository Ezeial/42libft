#include "libft.h"

static size_t	get_digit_number_in_base(size_t number, size_t baselen)
{
	size_t	count;

	count = 0;
	if (number == 0)
		count++;
	while (number > 0)
	{
		count++;
		number /= baselen;
	}
	return (count);
}

char *ft_itoa_un_base(size_t number, char *base_to)
{
	char	*final_str;
	size_t	baselen;
	size_t	i;

	baselen = ft_strlen(base_to);
	final_str = malloc(sizeof(char) * (get_digit_number_in_base(number, baselen) + 1));
	if (!final_str)
		return (NULL);
	i = get_digit_number_in_base(number, baselen);
	final_str[i--] = 0;
	if (number == 0)
		final_str[i] = base_to[0];
	while (number > 0)
	{
		final_str[i--] = base_to[number % baselen];
		number /= baselen;
	}
	return (final_str);	
}