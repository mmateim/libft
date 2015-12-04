/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:30:17 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/24 18:34:38 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nod;
	t_list	*aux;

	nod = *alst;
	while (nod->next != 0)
	{
		aux = nod;
		nod = nod->next;
		ft_lstdelone(&aux, (*del));
	}
	ft_lstdelone(&nod, (*del));
	*alst = 0;
}
