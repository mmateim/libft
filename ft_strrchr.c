/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/03 20:11:05 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/05 15:47:38 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char*)s;
	i = 0;
	while (p[i] != '\0')
		i++;
	if ((char)c == '\0')
		return (p + i);
	i--;
	while (p[i])
	{
		if (p[i] == (char)c)
			return (p + i);
		i--;
	}
	return (0);
}
