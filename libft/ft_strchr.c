/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 23:00:25 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/28 21:19:56 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i ++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (0);
}
/*
#include <stdio.h>
int main ()
{
	char s[] = "abcd9efghi";
	int c = '\0';

	printf("%s\n", ft_strchr(s,c));
}*/
