/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 21:57:04 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/25 17:43:30 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO:
//FIXME:

#include "libft.h"
#include <stdio.h>

static size_t	count_words(char const *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != '\0')
			words ++;
		while (*s != c && *s != '\0')
			s ++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	mem;
	int		len;

	if (!s)
		return (NULL);
	new = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (new == NULL)
		return (NULL);
	mem = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s != '\0')
			s++;
		if (*s == '\0')
			break ;
		while (s[len] != c && s[len] != '\0')
			len ++;
		new[mem] = ft_substr(s, 0, len);
		new[++mem] = 0;
		s = s + len;
	}
	return (new);
}
