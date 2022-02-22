/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:20:38 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 22:11:19 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

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
