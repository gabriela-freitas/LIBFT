/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:13:26 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/22 16:19:00 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	
	/*if (!(*((char *)dst)) && !(*((char *)dst)))
		return (NULL);*/
	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
int main ()
{
	char s1[] = "";
	char s2[] = "";
	char *s3 = (char *)ft_memcpy((void *)s1, (void *)s2, 3);
	printf("%s", s3);
}*/