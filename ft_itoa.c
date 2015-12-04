/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 14:10:58 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/17 17:06:17 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_len(int n)
{
	long	n2;
	int		i;

	if (n == 0)
		return (2);
	i = 0;
	if (n < 0)
	{
		i = 1;
		n2 = -n;
	}
	else
		n2 = n;
	while (n2 / 10 != 0)
	{
		i++;
		n2 = n2 / 10;
	}
	return (i + 2);
}

static char	*f_itoa2(long n, int i, int l)
{
	char	*s;

	s = (char*)malloc(sizeof(char) * l);
	if (s == 0)
		return (0);
	s[l - 1] = '\0';
	l = l - 2;
	while (l >= i)
	{
		s[l] = n % 10 + '0';
		n = n / 10;
		l--;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	long	n2;
	int		i;
	char	*s;

	i = 0;
	n2 = n;
	if (n < 0)
	{
		i = 1;
		n2 = (-1) * n2;
	}
	s = f_itoa2(n2, i, f_len(n));
	if (s == 0)
		return (0);
	if (n < 0)
		s[0] = '-';
	return (s);
}
