/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:08:02 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/24 18:11:57 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < (int)n - 1 && s1[i])
		i ++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int main ()
{
    char *s1 = "\200";
    char *s2 = "\0";

        printf("my: %d", ft_strncmp(s1,s2,4));
        printf("\nreference: %d\n", strncmp(s1,s2,4));
    return 0;
}*/
