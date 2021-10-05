#include "libft.h"

typedef struct indexes {
	int	start;
	int	end;
}				t_indexes;

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (c == set[i])
			return (1);
	return (0);
}

static t_indexes	compute_trimmed_str(char const *str, char const *set)
{
	t_indexes ids;
	
	ids.start = 0;
	ids.end = ft_strlen(str) - 1;
	while (str[ids.start] && is_in_set(str[ids.start], set))
		ids.start++;
	while (ids.start < ids.end && is_in_set(str[ids.end], set))
		ids.end--;
	ids.end++;
	return (ids);
}	

char	*ft_strtrim(char const *s1, char const *set)
{
	t_indexes	ids;

	ids = compute_trimmed_str(s1, set);
	return (ft_substr(s1, ids.start, (ids.end - ids.start)));
}
