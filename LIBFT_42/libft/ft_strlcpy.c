/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:20:38 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/19 18:09:42 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
/*
#include <string.h>
int main()
{
	char src[] = "yewdiehdoi";
	char dest[10] = "Hello";
	int retorno = strlcpy(dest, src, 5);
	printf("%s\n", dest);
	printf("%d", retorno);
}*/
