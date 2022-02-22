/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:52:28 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 22:12:14 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n",ft_isalnum('0'));
	printf("%d\n",ft_isalnum('*'));
	printf("%d\n",ft_isalnum('9'));
	printf("%d\n",ft_isalnum('-'));
	printf("%d\n",ft_isalnum('8'));
	printf("%d\n",ft_isalnum('#'));
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",ft_isalnum('^'));
	printf("%d\n",ft_isalnum('A'));
	printf("%d\n",ft_isalnum('&'));
	printf("%d\n",ft_isalnum('Z'));
	printf("%d\n\n",ft_isalnum('\n'));
	printf("%d\n",ft_isalnum('z'));
	printf("%d\n",ft_isalnum('s'));
	printf("%d\n",ft_isalnum('D'));
}*/