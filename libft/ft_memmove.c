/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:04:20 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 19:29:53 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	if ((size_t)dst - (size_t)src < len)
	{
		i = len;
		while (--i < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		i = -1;
		while (++i < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
/*
#include <string.h>
int main()
{
    char csrc[100] = "Geeksfor";
    //ft_memmove(csrc + 5, csrc, strlen(csrc) + 1);
	memmove(csrc + 5, csrc, strlen(csrc) + 1);
    printf("%s", csrc);
    return 0;
}*/