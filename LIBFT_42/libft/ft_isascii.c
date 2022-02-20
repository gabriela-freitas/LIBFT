/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:01:28 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/17 19:06:38 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n",ft_isascii('0'));
	printf("%d\n",ft_isascii('*'));
	printf("%d\n",ft_isascii('9'));
	printf("%d\n",ft_isascii('-'));
	printf("%d\n",ft_isascii('8'));
	printf("%d\n",ft_isascii('#'));
	printf("%d\n",ft_isascii('a'));
	printf("%d\n",ft_isascii('^'));
	printf("%d\n",ft_isascii('A'));
	printf("%d\n",ft_isascii('&'));
	printf("%d\n",ft_isascii('Z'));
	printf("%d\n",ft_isascii(127));
	printf("%d\n\n",ft_isascii('\n'));
	printf("%d\n",ft_isascii(300));
	printf("%d\n",ft_isascii(-589));
	printf("%d\n",ft_isascii(128));
}*/