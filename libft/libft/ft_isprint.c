/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:19:06 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/17 19:42:05 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (!(c >= 32 && c < 127))
		return (0);
	return (1);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n",ft_isprint('0'));
	printf("%d\n",ft_isprint('*'));
	printf("%d\n",ft_isprint('9'));
	printf("%d\n",ft_isprint('-'));
	printf("%d\n",ft_isprint('8'));
	printf("%d\n",ft_isprint('#'));
	printf("%d\n",ft_isprint('a'));
	printf("%d\n",ft_isprint('^'));
	printf("%d\n",ft_isprint('A'));
	printf("%d\n",ft_isprint('&'));
	printf("%d\n",ft_isprint('Z'));
	printf("%d\n",ft_isprint(88));
	printf("%d\n\n",ft_isprint('\n'));
	printf("%d\n",ft_isprint(127));
	printf("%d\n",ft_isprint(5));
	printf("%d\n",ft_isprint(30));
}*/