/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:34:29 by kduru             #+#    #+#             */
/*   Updated: 2022/02/27 15:34:56 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int ab)
{
	if (ab < 0)
		return (0);
	else if (ab <= 1)
		return (1);
	else
		return (ab * ft_recursive_factorial(ab - 1));
}
