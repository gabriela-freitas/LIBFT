/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:49:09 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 01:01:30 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//FIXME:
	//reusing functions from my own library ft_strlen and ft_strlcpy
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	cont;

	cont = 0;
	while (str[cont] != '\0')
		cont ++;
	return (cont);
}

unsigned int	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (src_len)
	{
		while (src[i] && i < dstsize - 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(s1) + sizeof(s2));
	i = ft_strlcpy(str, s1, ft_strlen(s1));
	i = ft_strlcpy(&str[i - 1], s2, ft_strlen(s2) + 1);
	return (str);
}
/*
int main (void)
{
	char s1[] = "Hey, ";
	char s2[] = "Gabi! Did you do it?";
	
	printf("%s\n", ft_strjoin(s1, s2));
}*/