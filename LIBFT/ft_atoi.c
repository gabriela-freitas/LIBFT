/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:43:05 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/18 20:44:11 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	white_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i ++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	signal;

	i = white_spaces(str);
	signal = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	nb = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	nb *= signal;
	return (nb);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	printf("%d\n", ft_atoi("-k58s"));
	printf("%d\n", atoi("-k58s"));
	printf("%d\n", ft_atoi("	  \n-583xs2323xs"));
	printf("%d\n", atoi("	  \n-583xs2323xs"));
	printf("%d\n", ft_atoi("-   58s"));
	printf("%d\n", atoi("-  58s"));
	printf("%d\n", ft_atoi("+85s"));
	printf("%d\n", atoi("+85s"));
	printf("%d\n", ft_atoi("+-k58s"));
	printf("%d\n", atoi("+-k58s"));
	return 0;
}*/
