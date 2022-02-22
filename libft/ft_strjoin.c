/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:49:09 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/22 16:50:39 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = ft_strlcpy(str, s1, ft_strlen(s1));
	i = ft_strlcpy(&str[i - 1], s2, ft_strlen(s2) + 1);
/* 	str[i + 1] = '\0'; */
	return (str);
}