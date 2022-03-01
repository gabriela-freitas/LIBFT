/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreita <gafreita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:29:49 by gafreita          #+#    #+#             */
/*   Updated: 2022/03/01 15:33:00 by gafreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	/* if (!lst)
		return (NULL);
	while (lst->next != NULL && lst)
		lst = lst->next;
	return (lst); */
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
		else
			lst = lst -> next;
	}
	return (NULL);
}
