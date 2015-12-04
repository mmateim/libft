/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 19:21:33 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/10 16:08:00 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p;

	p = (char*)malloc(sizeof(char) * ft_strlen(src));
	i = 0;
	while (((char*)src)[i])
	{
		p[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (p[i] && ((char*)dst)[i] && i < n)
	{
		((char*)dst)[i] = p[i];
		i++;
	}
	return (dst);
}
