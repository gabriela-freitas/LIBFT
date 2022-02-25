/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t.atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:39:01 by gafreita          #+#    #+#             */
/*   Updated: 2022/02/21 18:40:37 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int main ()
{
	printf("%d\n", ft_atoi("-k58s"));
	printf("%d\n", atoi("-k58s"));
	printf("%d\n", ft_atoi("	  \n-583xs2323xs"));
	printf("%d\n", atoi("	  \n-583xs2323xs"));
	printf("%d\n", ft_atoi("-   58s"));
	printf("%d\n", atoi("-  58s"));
	printf("%d\n", ft_atoi("+85s"));
	printf("%d\n", atoi("+85s"));
	printf("%d\n", ft_atoi("+-k58s"));
	printf("%d\n", atoi("+-k58s"));
	return 0;
}
