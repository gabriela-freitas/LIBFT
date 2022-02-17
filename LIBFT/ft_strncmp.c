/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:08:02 by gafreita          #+#    #+#             */
/*   Updated: 2022/01/27 22:02:22 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
		i ++;
	return (s1[i] - s2[i]);
}
/*
int main ()
{
    char s1[] = "Hey";
    char s2[] = "Hey";

        printf("my: %d", ft_strncmp(s1,s2,0));
        printf("\nreference: %d\n", strncmp(s1,s2,0));
    return 0;
}*/
