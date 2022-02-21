/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:05:30 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 00:48:32 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = (char *)malloc(len * sizeof(char const));
	if (str == NULL)
		return (NULL);
	i = start;
	while ((i - start) < len && s[i])
	{
		str[i - start] = s[i];
		i ++;
	}
	str[i - start] = '\0';
	return (str);
}

int	main(void)
{
	printf("%s\n", ft_substr("Hello World!", 5, 6));
}
