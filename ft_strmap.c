/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:56:44 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/06 12:07:38 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;

	i = 0;
	s2 = ft_strnew(ft_strlen(s));
	while (s[i] != '\0')
	{
		s2[i] = (*f)(s[i]);
		i++;
	}
	return (s2);
}
