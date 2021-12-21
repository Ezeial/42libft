#include "libft.h"
#include <stdio.h>

typedef struct number_data {
	size_t	number;
	int		sign;
}	t_number_data;

static size_t get_weight(char c, char *base)
{
	size_t	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

static size_t get_digit_number_in_base(size_t number, size_t baselen)
{
	size_t result;

	result = 0;
	while (number > 0)
	{
		number /= baselen;
		result++;
	}
	return (result);
}

static t_number_data compute_number(char *number, char *base_from)
{
	t_number_data number_data;
	if (*number == '-')
	{
		number_data.sign = -1;
		number++;
	}
	else
		number_data.sign = 1;
	number_data.number = 0;
	while (*number)
	{
		number_data.number = get_weight(*number, base_from) + ft_strlen(base_from) * number_data.number;
		number++;
	}
	return (number_data);
}

static char	*ft_convert_number(t_number_data nb_data, char *base_to)
{
	char	*final_str;
	size_t	final_len;
	size_t	i;
	size_t	baselen;

	baselen = ft_strlen(base_to); 
	final_len = get_digit_number_in_base(nb_data.number, baselen);
	if (nb_data.sign < 0)
	{
		if (nb_data.number != 0)
			final_len++;
		else
			nb_data.sign = 1;
	}
	final_str = malloc(sizeof(char) * (final_len + 1));
	if (!final_str)	
		return (NULL);	
	i = 0;
	if (nb_data.number == 0)
		final_str[i++] = '0';
	while (nb_data.number > 0)	
	{
		final_str[i] = base_to[nb_data.number % baselen];
		nb_data.number /= baselen;
		i++; 
	}
	if (nb_data.sign < 0)
		final_str[i++] = '-';
	final_str[i] = 0;
	return ft_strrev(final_str);
}

char *ft_convert_base(char *number, char *base_from, char *base_to)
{
	return (ft_convert_number(compute_number(number, base_from), base_to));
}