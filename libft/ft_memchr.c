/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 23:12:02 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 19:29:42 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < (int)n)
	{
		if (*((unsigned char *)s + i) == c)
			return ((void *)s + i);
		i ++;
	}
	if (c == 0)
		return ((void *)s + i);
	return (0);
}
