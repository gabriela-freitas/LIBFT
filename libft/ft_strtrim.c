/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:50:53 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 22:13:20 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1) - 1;
	while (s1[len] && ft_strchr(set, s1[len]))
		len --;
	str = ft_substr(s1, i, len - i + 1);
	return (str);
}
/*
int main()
{
	char s1[] = " xoxoxoxGabi Freitas  oxo xox";
	char set[] = "x o";
	printf("%s\n", ft_strtrim(s1, set));
}*/