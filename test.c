#include "libft.h"
#include <stdio.h>

typedef struct s_coord {
	int x;
	int y;
}	t_coord;

void print_vecel(void *el, void *arg)
{
	printf("[%d][%d]\n", ((t_coord *)el)->x, ((t_coord *)el)->y);
}

void ft_pushcoord(t_vectorptr vecptr, int x, int y)
{
	t_coord coord;

	coord.x = x;
	coord.y = y;
	ft_vecpush_back(vecptr, &coord);
}

int main(int aac, char **av)
{
	t_coord *vec = ft_vecnew(1, sizeof(t_coord));
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 4);
	ft_pushcoord(&vec, 42, 3);
	ft_pushcoord(&vec, 42, 21);
	ft_pushcoord(&vec, 42, 2);
	ft_pushcoord(&vec, 42, 21);
	ft_vecpop_back(vec);
	ft_vecpop_back(vec);
	ft_vecpop_back(vec);
	ft_vecfor_each(vec, print_vecel, NULL);
	ft_vecclear(vec);
}