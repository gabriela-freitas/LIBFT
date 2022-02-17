/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 22:11:52 by gafreita          #+#    #+#             */
/*   Updated: 2022/01/27 15:30:07 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <strings.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont ++;
	}
	return (cont);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size < len_d)
		len_s += size;
	else
		len_s += len_d;
	i = 0;
	while (src[i] != '\0' && len_d < size - 1)
	{
			dest[len_d] = src[i];
			i ++;
			len_d++;
	}
	dest[len_d] = '\0';
	return (len_s);
}

/*
int main ()
{
    char dest[13] = "Oii";
    char src[7] = "World!";
	int retorno = ft_strlcat(dest,src,7);
//	 int retorno = strlcat(dest,src,7);

    printf("\n%d\n%s", retorno,dest);
    return 0;

}*/
