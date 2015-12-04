/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 12:41:49 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/23 15:59:11 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && i < n && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n && n != 0)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
