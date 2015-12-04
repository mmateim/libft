/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 13:40:05 by mmatei            #+#    #+#             */
/*   Updated: 2015/11/17 17:07:11 by mmatei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_pnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_pnbr(-n);
	}
	else if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_pnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

void		ft_putnbr(int n)
{
	long	n2;

	n2 = n;
	ft_pnbr(n2);
}
