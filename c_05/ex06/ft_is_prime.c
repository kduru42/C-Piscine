/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:42:35 by kduru             #+#    #+#             */
/*   Updated: 2022/02/27 15:45:08 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	k;

	k = 7;
	if (nb == 0 || nb == 1)
		return (0);
	else if (nb % 2 == 0)
		return (nb == 2);
	else if (nb % 3 == 0)
		return (nb == 3);
	else if (nb % 5 == 0)
		return (nb == 5);
	while (k * k <= nb)
	{
		if (nb % k == 0)
			return (0);
		k++;
	}
	return (1);
}
