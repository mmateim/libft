/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:54:00 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/24 18:36:25 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	f_lstadd_end(t_list *lst1, t_list *lst2)
{
	lst2->next = 0;
	lst1->next = lst2;
	lst1 = lst1->next;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first;
	t_list	*aux;

	first = (*f)(lst);
	aux = first;
	lst = lst->next;
	while (lst != 0)
	{
		f_lstadd_end(aux, (*f)(lst));
		lst = lst->next;
	}
	return (first);
}
