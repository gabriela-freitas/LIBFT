/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:14:32 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/18 20:45:45 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdio.h>
int main ()
{
	printf("%c",ft_toupper('s'));
	printf("%c",ft_toupper('a'));
	printf("%c",ft_toupper('Z'));
	printf("%c",ft_toupper('5'));
}*/