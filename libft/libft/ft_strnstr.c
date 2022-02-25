/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:58:46 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/24 20:28:30 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < (int)len)
		{
			if (needle[j + 1] == 0)
				return ((char *)&haystack[i]);
			j ++;
		}
		i ++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "MZIRIBMZIRIBMZE123";
	char	*s2 = "MZIRIBMZE";
	char	*retorno = ft_strnstr(s1, s2, ft_strlen(s2));

	printf("%s", retorno);
	return (0);
}*/
