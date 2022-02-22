/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:13:19 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 19:29:56 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((char *)b + i) = c;
		i ++;
	}
	return (b);
}
/*
#include <string.h>
int main ()
{
	char str[] = "Hello";
	void *b = str;
	memset(b,68,8);
	printf("%s\n",str);
}*/