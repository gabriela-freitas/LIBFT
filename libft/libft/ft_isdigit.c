/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:17:47 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 19:25:45 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main ()
{
	printf("%d\n",ft_isdigit('0'));
	printf("%d\n",ft_isdigit('*'));
	printf("%d\n",ft_isdigit('9'));
	printf("%d\n",ft_isdigit('a'));
	printf("%d\n",ft_isdigit('8'));
	printf("%d\n",ft_isdigit('D'));
}*/
