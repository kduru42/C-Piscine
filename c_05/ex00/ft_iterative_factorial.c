/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:33:06 by kduru             #+#    #+#             */
/*   Updated: 2022/02/27 15:34:05 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int ab)
{
	int	res;

	res = 1;
	if (ab < 0)
		return (0);
	else if (ab <= 1)
		return (1);
	while (ab > 0)
		res *= ab--;
	return (res);
}
