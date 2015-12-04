/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 12:50:46 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/17 17:04:29 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*zone;

	if (!(zone = (void*)malloc(sizeof(*zone) * size)) || !size)
		return (0);
	ft_memset(zone, 0, size);
	return (zone);
}
