/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 12:37:49 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/17 17:09:08 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	sf;
	char	*ns;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\n'
			|| s[i] == '\t' || s[i] == ',') && s[i] != '\0')
		i++;
	sf = ft_strlen(s);
	if (sf != 0)
		sf--;
	else
		return ((char*)s);
	while ((s[sf] == ' ' || s[sf] == '\n'
			|| s[sf] == '\t' || s[sf] == ',') && sf >= i)
		sf--;
	ns = ft_strsub(s, i, sf - i + 1);
	if (ns == 0)
		return (0);
	return (ns);
}
