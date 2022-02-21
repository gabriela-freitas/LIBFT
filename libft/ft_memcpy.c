/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:13:26 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 00:02:45 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}
/*
#include <string.h>
int main ()
{
	char s1[20] = "Helloo";
	char s2[] = "Hey you";
	char *s3 = (char *)memcpy((void *)s1, (void *)s2, 3);
	printf("%s", s3);
}*/