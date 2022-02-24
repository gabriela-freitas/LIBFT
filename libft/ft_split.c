/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:57:04 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/24 22:58:11 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO:
//FIXME:

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	mem;
	int		len;

	new = malloc(sizeof(char *) + 1);
	if (!s || !new)
		return (NULL);
	new[0] = 0;
	mem = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s != '\0')
			s++;
		if (*s == '\0')
			break ;
		*new = ft_realloc(*new, mem * sizeof(char *),
				(mem + 1) * sizeof(char *));
		while (s[len] != c && s[len] != '\0')
			len ++;
		new[mem] = ft_substr(s, 0, len);
		new[++mem] = 0;
		s = s + len;
	}
	return (new);
}
/*
#include <stdio.h>

int	main()
{
	char	**new;
	char str[] =  "split this for me !";
	char sep = ' ';

	new = ft_split(str, sep);
	for (int i = 0; new[i] != 0; i ++)
		printf("%s\n", new[i]);
}*/
