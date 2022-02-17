/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:50:01 by gafreita          #+#    #+#             */
/*   Updated: 2022/01/26 18:25:32 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	white_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i ++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	signal;

	i = white_spaces(str);
	signal = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i ++;
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
int main ()
{
	printf("%d\n", ft_atoi(" 	\n--+---+123456789ab567"));
	return 0;
}*/
