/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:45:26 by kduru             #+#    #+#             */
/*   Updated: 2022/02/26 17:09:29 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	yazdir(long long nbb, char *base)
{
	int	sayac;
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	if (nbb < 0)
	{
		write(1, "-", 1);
		nbb *= -1;
	}
	if (nbb < i)
	{
		ft_putchar(base[nbb % i]);
		return ;
	}
	else
		yazdir(nbb / i, base);
	yazdir(nbb % i, base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nbb;

	nbb = nbr;
	yazdir(nbb, base);
}
