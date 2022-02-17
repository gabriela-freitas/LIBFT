/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 22:20:38 by gafreita          #+#    #+#             */
/*   Updated: 2022/01/24 22:58:35 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				check;
	unsigned int	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len ++;
	i = 0;
	check = 0;
	while (i < size + dest_len - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			check ++;
	}
	dest[i] = '\0';
	if (!check)
	{
		while (src[i] != '\0')
			i++;
	}
	return (i);
}

/*int main()
{
	char src[] = "hellotqweabcdefghjlrr";
	char dest[10] = "Hello";
	ft_strlcpy(dest, src, 5);
	printf("%s", dest);
}*/
