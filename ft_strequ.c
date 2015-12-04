/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 14:37:16 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/05 15:37:06 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	if (s1[0] != s2[0])
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (0);
	return (1);
}