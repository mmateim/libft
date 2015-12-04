/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 17:57:47 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/23 18:29:10 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_n;
	void	*new_content;

	new_n = (t_list*)malloc(sizeof(t_list));
	if (new_n == 0)
		return (0);
	new_content = (void *)malloc(sizeof(content) * content_size);
	if (new_content == 0)
		return (0);
	new_n->content = (void*)content;
	if (content == 0)
		new_n->content_size = 0;
	else
		new_n->content_size = content_size;
	new_n->next = 0;
	return (new_n);
}
