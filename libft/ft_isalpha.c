/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:05:18 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/17 18:40:46 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (!(c >= 'A' && c <= 'Z')
		&& !(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('/'));
	printf("%d\n", ft_isalpha('F'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('Z'));
	printf("%d\n", ft_isalpha('*'));
	printf("%d\n", ft_isalpha('z'));
}*/
