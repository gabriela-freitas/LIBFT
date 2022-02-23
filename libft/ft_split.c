/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:57:04 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/23 20:38:40 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO:
//FIXME:

#include "libft.h"
#include <stdio.h>

char	*ft_realloc(char *old, size_t old_size, size_t new_size)
{
	char	*new;

	if (!old_size)
		return ((char *)malloc((new_size + 1) * sizeof(char *)));
	new = (char *)malloc((new_size + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	ft_memcpy(new, old, old_size);
	free(old);
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	memory;
	int		start;
	int		len;

	matrix = NULL;
	memory = 0;
	start = 0;
	while (*s)
	{
		if (*s == c && *(s + 1) != c)
		{
			memory ++;
			//to com seg fault aqui!!!
			*matrix = ft_realloc(*matrix, memory - 1, memory);
			len = start;
			while (*s != c && ++start)
				s ++;
			matrix[memory] = ft_substr(s, len, start - len);
			printf("%s\n", matrix[memory]);
		}
		else
		{
			start ++;
			s++;
		}
	}
	matrix[memory + 1] = NULL;
	return (matrix);
}

int	main()
{
	char	**matrix;
	char str[] = "  gabi   e    oi";
	char sep = ' ';

	matrix = ft_split(str, sep);
	for (int i = 0; matrix[i] != 0; i ++)
		printf("%s\n", matrix[i]);
}
