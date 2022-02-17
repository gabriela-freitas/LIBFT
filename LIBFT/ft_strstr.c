/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:51:46 by gafreita          #+#    #+#             */
/*   Updated: 2022/01/26 13:18:39 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <string.h>
#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == *to_find)
		{
			j = 0;
			while (str[i] == to_find[j])
			{
				i ++;
				j ++;
				if (to_find[j] == '\0')
					return (&str[i - j]);
			}
			i = i - j;
		}
		i ++;
	}
	return (0);
}
/*
int main ()
{
    char palheiro[] = "foo br bar second";
    char agulha[] = "eb";
    char *retorno = ft_strstr(palheiro,agulha);

    printf("%s", retorno);
    return 0;

}*/
