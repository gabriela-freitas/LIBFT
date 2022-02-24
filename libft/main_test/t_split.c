#include "libft.h"
#include <stdio.h>

int	main()
{
	char	**new;
	char str[] =  "split this for me !";
	char sep = ' ';

	new = ft_split(str, sep);
	for (int i = 0; new[i] != 0; i ++)
		printf("%s\n", new[i]);
}
