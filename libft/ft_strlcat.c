/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:11:52 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 19:31:27 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize <= len_d)
		return (dstsize + ft_strlen(src));
	else
		len_s += len_d;
	i = 0;
	while (src[i] != '\0' && len_d < dstsize - 1)
	{
			dst[len_d] = src[i];
			i ++;
			len_d++;
	}
	dst[len_d] = '\0';
	return (len_s);
}
/*
#include <strings.h>
int main ()
{
    char dst[13] = "Hello";
    char src[7] = "World";
	//int retorno = ft_strlcat(dst,src,7);
	 int retorno = strlcat(dst,src,7);

    printf("\n%d\n%s", retorno,dst);
    return 0;

}*/