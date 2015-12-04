/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/27 17:41:26 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/17 17:05:18 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char*)src)[i] != (char)c)
	{
		((char*)dst)[i] = ((const char*)src)[i];
		i++;
	}
	if (n == i)
		return (0);
	return (dst + i + 1);
}
