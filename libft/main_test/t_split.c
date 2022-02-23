#include "libft.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	char	**matrix;

	if (ac == 3)
	{
		matrix = ft_split(av[1], av[2][0]);
		for (int i = 0; matrix[i] != 0; i ++)
			printf("%s\n", matrix[i]);
	}
}
