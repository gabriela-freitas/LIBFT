/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:19:41 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/18 20:22:44 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>
int main ()
{
	printf("%c",ft_tolower('s'));
	printf("%c",ft_tolower('A'));
	printf("%c",ft_tolower('Z'));
	printf("%c",ft_tolower('5'));
}*/