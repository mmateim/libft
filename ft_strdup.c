/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 19:33:39 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/05 15:36:18 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		l;
	int		i;

	l = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(char) * (l + 1));
	if (s2 == 0)
		return (0);
	i = 0;
	while (i < l)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
