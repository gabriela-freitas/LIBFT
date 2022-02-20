/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:58:46 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/19 17:59:05 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' || i < (int)len)
	{
		if (haystack[i] == *needle)
		{
			j = 0;
			while (haystack[i] == needle[j])
			{
				i ++;
				j ++;
				if (needle[j] == '\0')
					return ((char *)&haystack[i - j]);
			}
			i = i - j;
		}
		i ++;
	}
	return (0);
}
/*
int main ()
{
    char palheiro[] = "foo br bar second";
    char agulha[] = "ui";
    char *retorno = ft_strnstr(palheiro,agulha,7);

    printf("%s", retorno);
    return 0;
}*/
